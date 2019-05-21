#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char x;
    int a, b, c;

    cout << "Programm Reihe \n";
    cout << "-------------- \n";
    cout << "\n";
    cout << "   Dieses Programm berechnet arithmetische\n";
    cout << "   Reihen von Ganzzahlen\n";
    cout << "\n";
    cout << "\n";
    do {
        cout << "   W\x84hlen Sie eine Funktion: \n";
        cout << "\n";
        cout << "   a) Zweierreihe (Startwert 1, Schrittweite 2, Anzahl Werte 5) \n";
        cout << "   b) Reihe mit w\x84hlbaren Gr\x94ssen \n";
        cout << "   c) Programmende \n";
        cout << "\n";
        cout << ">";
        x = getch();
        cout << "\n";

        switch (x) {
            case 'a':
                a = 1;
                b = 2;
                c = 5;
                for (int i=0;i<c; i++) {
                    if (i == 0)
                        cout << a;
                    else if (i == 1)
                        cout << a + b;
                    else {
                        a += b;
                        cout << a + b;
                    }
                    if (i<c && i!=c-1)
                        cout << " / ";
                }

                cout << "\n";
                cout << "\n";
                system("PAUSE");
                break;
            case 'b':
                cout << "Startwert:         ";
                cin >> a;
                cout << "\n";
                cout << "Schrittweite:      ";
                cin >> b;
                cout << "\n";
                cout << "Anzahl Werte:      ";
                cin >> c;
                cout << "\n";
                cout << "\n";
                for (int i=0;i<c; i++) {
                    if (i == 0)
                        cout << a;
                    else if (i == 1)
                        cout << a + b;
                    else {
                        a += b;
                        cout << a + b;
                    }
                    if (i<c && i!=c-1)
                        cout << " / ";
                }

                cout << "\n";
                cout << "\n";
                system("PAUSE");
                break;
        }

    } while (x != 'c');
    return 0;
}