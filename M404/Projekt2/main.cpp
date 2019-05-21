#include <iostream>

using namespace std;

double zahl(int i) {
    cout << "Zahl "<< i << ": ";
    double a;
    cin >> a;
    cout << "\n";
    return a;
}

double rechne(double i, double j) {
    return (i * j);
}

void ausgeben(double i) {
    cout << "Das Ergebnis ist " << i;
}

int main() {
    double i, j, a;
    i = zahl(1);
    j = zahl(2);
    a = rechne(i, j);
    ausgeben(a);
    return 0;
}