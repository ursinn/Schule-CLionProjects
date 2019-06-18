#include <iostream>

using namespace std;

int main() {
    int Tage[5], d, Summe=0, Tag, Ende;

    cout << "Um zu beginnen, klicke auf 1, um zu beenden auf 2:";
    cin >> Ende;
    fflush(stdin);
    cout << endl;
    while (Ende!=2) {
        switch(Ende) {
            case 1:
                for(d=0;d<5;d++) {
                    cout << "Gebe die Stundenanzahl fuer den " << d+1 << ". Tag an:";
                    cin >> Tage[d];
                    fflush(stdin);
                    Summe=Summe+Tage[d];
                }

                cout << "Du hast "<< Summe <<" Schulstunden in einer Woche" << endl << endl;
                Summe=0;
                cout << "Willst du abfragen, wie viele Stunden du an irgend einem Tag hast,\n dann klicke 3, wenn nicht 4:";
                cin >> Tag;
                fflush(stdin);

                if (Tag == 3) {
                    cout << "Von welchem Tag wilst du die Stundenanzahl wissen: ";
                    cin >> Tag;
                    fflush(stdin);
                    cout << "An dem Tag "<< d <<" hast du " << Tage[d-1] << " Stunden." << endl << endl;
                    cout << "Willst du abfragen, wie viele Stunden du an irgend einem Tag hast,\n dann klicke 3, wenn nicht 4:";
                    cin >> Tag;
                    fflush(stdin);
                }

                if (Tag == 4) {
                    cout << "Um weiter zu machen gebe 1 ein, wenn du nicht weitermachen willst, gebe 2 ein:";
                    cin >> Ende;
                    fflush(stdin);
                }

                break;
            case 2:
                break;
        }
    }

    system("PAUSE");
    return 0;
}