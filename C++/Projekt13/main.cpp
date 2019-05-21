#include <iostream>

using namespace std;

int main() {
    float in, in2, in3, in4, in5, in6, disc, disc2, disc3, disc4, disc5, disc6, disc7;
    cout << "Listeneinkaufspreis: ";
    cin >> in;
    cout << "\n";
    cout << "Rabatt (in %): ";
    cin >> in2;
    cout << "\n";
    cout << "Skonto (in %): ";
    cin >> in3;
    cout << "\n";
    cout << "Bezugskosten: ";
    cin >> in4;
    cout << "\n";
    cout << "Handlungskostensatz (in %): ";
    cin >> in5;
    cout << "\n";
    cout << "Gewinnzuschlag (in %): ";
    cin >> in6;
    cout << "\n";
    //---------------------
    cout << "Listeneinkaufspreis: " << in << "\n";
    cout << "Rabatt: " << in2 << "\n";
    disc = (in2*in)/100;
    cout << "Zieleinkaufspreis: " << in-disc << "\n";
    disc2 = 0;
    cout << "Skonto: " << disc2 << "\n";
    disc3 = 0;
    cout << "Bareinkaufspreis: " << disc3 << "\n";
    cout << "Bezugskosten: " << in4 << "\n";
    cout << "Bezugspreis: " << disc3+in4 << "\n";
    disc4 = 0;
    cout << "Handlungskosten: " << disc4 << "\n";
    cout << "Selbstkostenpreis: " << (disc3+in4)+disc4 << "\n";
    disc5 = 0;
    cout << "Gewinn: " << disc5 << "\n";
    disc6 = 0;
    cout << "Barverkaufspreis: " << disc6 << "\n";
    disc7 = 0;
    cout << "Mehrwersteuer (16%): " << disc7 << "\n";
    cout << "Bruttoverkaufspreis: " << disc6+disc7 << "\n";
    return 0;
}