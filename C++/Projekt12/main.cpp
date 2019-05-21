#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Milimetermase in römische Längenmasse \n";
    cout << "1. Digitus \n";
    cout << "2. Palmus \n";
    cout << "3. Pes \n";
    cout << "4. Cubitus \n";

    cout << "Wahl: ";
    int in;
    cin >> in;
    fflush(stdin);
    cout << "\n";

    double out;
    string value;

    switch (in) {
        case 1:
            //Digitus
            cout << "Value: ";
            cin >> value;
            cout << "\n";
            out = stof(value) / 18.522;
            cout << "Ergebniss: " << out << "\n";
            break;
        case 2:
            //Palmus
            cout << "Value: ";
            cin >> value;
            cout << "\n";
            out = stof(value) / 74.088;
            cout << "Ergebniss: " << out << "\n";
            break;
        case 3:
            //Pes
            cout << "Value: ";
            cin >> value;
            cout << "\n";
            cin >> value;
            cout << "\n";
            out = stof(value) / 444.528;
            cout << "Ergebniss: " << out << "\n";
            break;
        default:
            break;
    }

    system("PAUSE");
    return 0;
}