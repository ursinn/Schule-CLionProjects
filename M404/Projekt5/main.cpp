#include <iostream>

using namespace std;

void header();
void line();

int main() {
    header();

    cout << "Hallo Welt" << endl;

    header();
    return 0;
}

void line() {
    cout << "***************************************************" << endl;
}

void header() {
    line();
    cout << "* Dieses Programm wurde erstellt von Claus Clever *" << endl;
    line();
}