#include <iostream>

using namespace std;

int main() {
    int in, amount;
    double money = 0.00;

    cout << "Getraenke Automat \n";
    cout << "\n";
    cout << "Waehlen sie ihr Getraenk aus: \n";
    cout << "1) Wasser (0,50 Fr.) \n";
    cout << "2) Limonade (1,00 Fr.) \n";
    cout << "3) Bier (2,00 Fr.) \n";
    cout << "\n";
    cout << "Geben sie 1, 2 oder 3 ein: ";
    cin >> in;
    fflush(stdin);
    cout << "\n";

    switch (in) {
        case 1:
            cout << "Geben sie die gewunschte Menge ein: "
            cin >> amount;
            fflush(stdin);
            cout << "\n";
            cout << "--- Bezahlvorgang --- \n";
            while (money > (amount * 0.50)) {
                cout << "Es fehlen noch " << (amount * 0.50) - money << " Fr. \n";
                cout << "Bitte werfen sie ein Geldstueck ein: ";
                cin >> money;
                fflush(stdin);
                cout << "\n";
            }
            cout << "--- Getraenkeausgabe --- \n";
            money = money - (amount * 0.50);
            for (int i=0; i<amount; i++) {
                cout << "Flasche " << i << " von " << amount << "ausgegeben.";
            }
            cout << "Vielen Dank, bitte entnehmen sie ihr(e) Getraenk. \n";
            break;
        case 2:
            cout << "Bitte werfen sie 1.00 Fr. ein: ";
            cin >> money;
            fflush(stdin);
            cout << "\n";
            if (money == 1.00)
                cout << "Vielen Dank, bitte entnehmen sie ihr Getraenk. \n";
            else
                cout << "Sie haben kein 1 Fr. Stueck eingeworfen. \n";
            break;
        case 3:
            cout << "Bitte werfen sie 2.00 Fr. ein: ";
            cin >> money;
            fflush(stdin);
            cout << "\n";
            if (money == 2.00)
                cout << "Vielen Dank, bitte entnehmen sie ihr Getraenk. \n";
            else
                cout << "Sie haben kein 2 Fr. Stueck eingeworfen. \n";
            break;
        default:
            cout << "Unbekanntes Getraenk!";
            break;
    }

    return 0;
}