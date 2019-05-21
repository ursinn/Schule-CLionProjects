#include <iostream>
#include <ctime>

using namespace std;

void print_title() {
    cout << "Neues Spiel, neues Glueck!\n";
    cout << "******************************\n\n";
}

int random() {
    return (rand() % 10);
}

int check(int y) {
    int x;
    x = random();
    if (x==y) {
        cout << "Sie haben richtig getippt!\n";
        return 1;
    }
    else {
        cout << "Leider falsch.\n";
        cout << "Die Zahl lautete: " << x << "\n\n\n";
        return 0;
    }
}

int gamble() {
    int i, y;
    srand(time(NULL));
    print_title();
    cout << "Geben Sie ihren Zahlentipp ein (0 bis 10): ";
    cin >> y;
    fflush(stdin);
    i = check(y);
    system("PAUSE");
    return i;
}

int main() {
    int i, a;
    for (i=0; i<3; i++) {
        a = gamble();
        if (a != 1)
            continue;
        break;
    }
    return 0;
}