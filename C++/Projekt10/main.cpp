#include <iostream>

using namespace std;

int main() {
    int z3;
    float z1,z2;
    cout << "Addieren und Subtrahieren von zwei Zahlen \n";
    cout << "========================================= \n";
    cout << "Geben Sie eine Zahl ein (float): ";
    cin >> z1;
    cout << "\n";
    cout << "Geben Sie eine zweite Zahl ein (float): ";
    cin >> z2;
    cout << "\n";
    cout << "Addieren oder subtrahieren? \n";
    cout << "Gebe eine 1 ein, wenn addiert werden soll, \n";
    cout << "eine 2, wenn subtrahiert werden soll: ";
    cin >> z3;
    cout << "\n";
    switch (z3) {
        case 1:
            cout << "Resultat: Die Summe der beiden Zahlen ist " << z1+z2 << " \n";
            break;
        case 2:
            cout << "Resultat: Die Differenz der beiden Zahlen ist " << z1-z2 << " \n";
            break;
        default:
            cout << "Fehler \n";
            break;
    }
    system("PAUSE");
    return 0;
}