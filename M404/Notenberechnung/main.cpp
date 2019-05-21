#include <iostream>

using namespace std;

int main() {
    float x[10];

    cout << "******************* \n";
    cout << "* Notenberechnung * \n";
    cout << "******************* \n";

    for (int i=0; i<10; i++) {
        cout << "[Nr. " << i+1 << "]" << " Bitte Note eingeben: ";
        cin >> x[i];
        cout << "\n";
    }

    float a;
    for (int i=0; i<10; i++) {
        a += x[i];
    }
    cout << "Summe: " << a << " / 60.0 \n";
    cout << "Durchschnitt: " << a / 10 << "\n";
    return 0;
}