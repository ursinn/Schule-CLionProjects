#include <iostream>

using namespace std;

int main() {

    int in, radius;
    double pi = 3.14159;
    bool run = true;

    while (run) {
        system("CLS");
        cout << "---------------------------------------------------------------- \n";
        cout << "Programm: Kreis                              Author: Ursin Filli \n";
        cout << "---------------------------------------------------------------- \n";
        cout << "Kreisberechnung: \n";
        cout << "\n";
        cout << "Dieses Programm ermoeglicht, abhaengig von der Auswahl die \n";
        cout << "Flaeche oder den Umfang eines Kreises zu ermitteln. \n";
        cout << "\n";
        cout << "       1 = Kreisflaeche \n";
        cout << "       2 = Kreisumfang \n";
        cout << "       0 = Programmende \n";
        cout << "\n";
        cout << "Bitte geben Sie die Auswahl 1,2 oder 0 ein > ";
        cin >> in;
        fflush(stdin);
        cout << "\n";

        switch (in) {
            case 1:
                cout << "Berechnung der Kreisflaeche \n";
                cout << "bitte geben Sie den Radius ein > ";
                cin >> radius;
                fflush(stdin);
                cout << "\n";
                cout << "die Flaeche ist " << radius * radius * pi << "\n";
                getchar();
                break;
            case 2:
                cout << "Berechnung des Kreisumfangs \n";
                cout << "bitte geben Sie den Radius ein > ";
                cin >> radius;
                fflush(stdin);
                cout << "\n";
                cout << "der Umfang ist " << radius * 2 * pi << "\n";
                getchar();
                break;
            case 0:
                cout << "Danke dass Sie mit diesem Programm gearbeitet haben \n";
                cout << "Auf Wiedersehen \n";
                cout << "---------------------------------------------------------------- \n";
                run = false;
                getchar();
                break;
            default:
                cout << "Fehler! \n";
                getchar();
        }
    }

    return 0;
}