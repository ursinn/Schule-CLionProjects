#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Note auf 0.5 Punkte runden \n";
    cout << "-------------------------- \n";
    cout << "Eine eingegebene Note wird gereundet ausgegeben. \n";
    double note;
    cout << "Geben Sie eine Note ein! ";
    cin >> note;
    double note2;
    note2 = floor(2*note+0.5)/2;
    cout << "\n";
    cout << "Die gerundete Note ist " << note2 << ". \n";
    system("PAUSE");
    return 0;
}