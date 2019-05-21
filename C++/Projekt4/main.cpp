#include <iostream>

using namespace std;

int main() {
    char in;
    string pw, pw_fix = "Hi", name;
    bool run = true;

    while(run) {
        system("CLS");
        cout << "1 PW Check: \n";
        cout << "2 Name in / out: \n";
        cout << "e Close: \n";

        cin >> in;
        fflush(stdin);

        switch (in) {
            case '1' :
                cout << "Password: ";
                cin >> pw;
                fflush(stdin);

                if (pw == pw_fix) {
                    cout << "Password Correct. \n";
                } else {
                    cout << "Password Error! \n";
                }
                getchar();
                break;
            case '2' :
                cout << "Name: ";
                cin >> name;
                fflush(stdin);

                cout << "Hallo, " << name << "\n";
                getchar();
                break;
            case 'e' :
                cout << "Goodbye... \n";
                getchar();
                run = false;
                break;
            default:
                cout << "Unbekannte Eingabe?! \n";
                getchar();
        }
    }
    return 0;
}