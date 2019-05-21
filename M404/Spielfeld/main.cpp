#include <iostream>

using namespace std;

void printField(int*);
void move(int*, int*, int*, char);


int main() {
    int playarea[8][8] = {0}, posX=0, posY=0;
    playarea[posX][posY] = 1;
    char zug;

    cout << "Beenden mit x\n";

    do {
        printField(&playarea[0][0]);
        cout << "\n Zug [w hoch, a links, s runter, d rechts]: ";
        cin >> zug;
        move(&playarea[0][0], &posX, &posY, zug);
    } while (zug != 'x');

    return 0;
}

void printField(int *field) {
    cout << "\n";
    for (int i=0;i<8;i++) {
        for (int j=0;j<8;j++) {
            cout << *(field+i*8+j);
        }
        cout << "\n";
    }
}

void move(int *field, int *posX, int *posY, char zug) {
    *(field + *posY * 8 + *posX) = 0;

    switch(zug) {
        case 'w':
            (*posY)--;
            break;
        case 'a':
            (*posX)--;
            break;
        case 's':
            (*posY)++;
            break;
        case 'd':
            (*posX)++;
            break;
    }

    if (*posX < 0) *posX = 7;
    if (*posX > 7) *posX = 0;
    if (*posY < 0) *posY = 7;
    if (*posX > 7) *posY = 0;

    *(field + *posY * 8 + *posX) = 1;
}