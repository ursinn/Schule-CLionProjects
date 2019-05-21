#include <iostream>

using namespace std;

void header();
void In(int*);
void Work(int*, bool*);
void Out(bool*);

int main() {
    int i = 0;
    bool prim = false;

    header();

    In(&i);
    Work(&i, &prim);
    Out(&prim);
    return 0;
}

void header() {
    cout << "Programm Primzahl" << endl;
    cout << "-----------" << endl;
    cout << "Bestimmung ob die Zahl eine Primzahl ist.";
    cout << endl;
}

void In(int *i) {
    cout << "Geben Sie eine Zahl ein (int):";
    cin >> *i;
}

void Work(int *i, bool *prim) {
    int j=2;
    while((*i%j)&&(j<=*i)) {
        j++;
    }

    if (j==*i)
        *prim = true;
    else
        *prim = false;
}

void Out(bool *prim) {
    if (*prim)
        cout << endl << "Die Zahl ist eine Primzahl" << endl << endl;
    else
        cout << endl << "Die Zahl ist keine Primzahl" << endl << endl;
}