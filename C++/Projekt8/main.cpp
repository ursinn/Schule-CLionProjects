#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    //1. Aufgabe
    /*
    char x;
    do {
        system("CLS");
        cout << "Guten Tag \n";
        x = getch();
    } while(x != 'e' && x != 'E');
    return 0;
     */

    //2. Aufgabe
    /*
    for (int i=1; i<6; i++) {
        cout << i << "\n";
    }
     */

    //3. Aufgabe
    /*
    for (int i=7; i>2; i--) {
        cout << i << "\n";
    }
     */

    //4. Aufgabe
    /*
    for (int i=12; i<221; i++) {
        cout << i << "\n";
    }
     */

    //5. Aufgabe
    /*
    for (int i=512; i>218; i--) {
        cout << i << "\n";
    }
     */

    //6. Aufgabe
    /*
    for (int i=17; i<931; i++) {
        if ( i % 12 == 0) {
            cout << i << "\n";
        }
    }
     */

    //7. Aufgabe
    /*
    int min, max, teiler;
    cout << "min: ";
    cin >> min;
    cout << "\n";
    cout << "max: ";
    cin >> max;
    cout << "\n";
    cout << "teiler: ";
    cin >> teiler;
    cout << "\n";
    for (int i=min; i<=max; i++) {
        if ( i % teiler == 0) {
            cout << i << "\n";
        }
    }
     */

    //9. Aufgabe
    cout << "-------------------\n";
    cout << " Mein kleines Menu \n";
    cout << "-------------------\n";
    cout << "\n";
    cout << "1 = Word \n";
    cout << "2 = Excel \n";
    cout << "3 = PowerPoint \n";
    cout << "4 = Console cmd \n";
    cout << "5 = Internet Browser \n";
    cout << "\n";
    cout << "e = Beenden \n";
    cout << "\n";
    cout << "Waehlen Sie: ";
    char in;
    cin >> in;
    switch (in) {
        case 1:
            cout << "";
    }

}
