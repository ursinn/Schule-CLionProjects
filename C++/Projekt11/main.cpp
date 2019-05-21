#include <iostream>
#include <time.h>

using namespace std;

int main() {
    //Aufgabe 1
    /*
    int in;
    cout << "Zahl: ";
    cin >> in;
    cout << "\n";
    switch (in) {
        case 1:
            cout << "Montag \n";
            break;
        case 2:
            cout << "Dienstag \n";
            break;
        case 3:
            cout << "Mittwoch \n";
            break;
        case 4:
            cout << "Donnerstag \n";
            break;
        case 5:
            cout << "Freitag \n";
            break;
        case 6:
            cout << "Samstag \n";
            break;
        case 7:
            cout << "Sonntag \n";
            break;
        default:
            cout << "Die Zahl liegt nicht im Bereich von 1 bis 7 \n";
            break;
    }
    system("PAUSE");
     */

    //Aufgabe 2
    /*
    int jahr;
    //Stackoverflow - Start
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int day = aTime->tm_mday;
    int month = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
    int year = aTime->tm_year + 1900; // Year is # years since 1900
    //Stackoverflow - Ende
    cout << "Jahr: ";
    cin >> jahr;
    fflush(stdin);
    cout << "\n";
    cout << "Alter: " << year-jahr << "\n";
    system("PAUSE");
     */

    //Aufgabe 3
    int z0,z1,z2;
    cout << "Rechner \n";
    cout << "======= \n";
    cout << "1 f\x81r Addieren, 2 f\x81r Subtrahieren, 3 f\x81r Multiplizieren, 4 f\x81r Dividieren \n";
    cout << "Option: ";
    cin >> z0;
    cout << "\n";
    if (!(z0 > 0 && z0 < 5)) {
        cout << "Falsche Anwendung! \n";
        system("Pause");
        return 0;
    }
    cout << "Zahl 1: \n";
    cin >> z1;
    fflush(stdin);
    cout << "\n";
    cout << "Zahl 2: \n";
    cin >> z2;
    fflush(stdin);
    cout << "\n";
    if (z0 == 1)
        cout << "Resultat: " << z1 + z2 << "\n";
    if (z0 == 2)
        cout << "Resultat: " << z1 - z2 << "\n";
    if (z0 == 3)
        cout << "Resultat: " << z1 * z2 << "\n";
    if (z0 == 4)
        cout << "Resultat: " << z1 / z2 << "\n";
    system("PAUSE");
    return 0;
}