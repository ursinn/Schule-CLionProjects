#include <iostream>

using namespace std;

int main() {

    int a,b,c;

    cout << "--------------------------------------------------------------- \n";
    cout << "Programm: KleinsteZahl                       Author: Ursin Filli \n";
    cout << "--------------------------------------------------------------- \n";
    cout << "Dieses Programm ermittelt von drei eingegebenen Variablen die \n";
    cout << "Kleinste. \n";
    cout << "\n";
    cout << "  Geben Sie die erste Zahl ein > ";
    cin >> a;
    fflush(stdin);
    cout << "\n";
    cout << "  Geben Sie die zweite Zahl ein > ";
    cin >> b;
    fflush(stdin);
    cout << "\n";
    cout << "  Geben Sie die dritte Zahl ein > ";
    cin >> c;
    fflush(stdin);
    cout << "\n";

    if (a <= b && a <= c) {
        cout << "  Die kleinste Zahl ist: " << a << "\n";
    } else if (b <= c) {
        cout << "  Die kleinste Zahl ist: " << b << "\n";
    } else {
        cout << "  Die kleinste Zahl ist: " << c << "\n";
    }

    cout << "\n";
    cout << "Danke dass Sie mit diesem Programm gearbeitet haben \n";
    cout << "Auf Wiedersehen \n";
    cout << "--------------------------------------------------------------- \n";
    getchar();
    return 0;
}