#include <iostream>

using namespace std;

int addiren(int i, int j) {
    return (i + j);
}

int main() {
    int i, j;
    cout << "Zahl: ";
    cin >> i;
    cout << "\nZahl: ";
    cin >> j;
    int summe = addiren(i, j);
    cout << "Summe von " << i << " und " << j << " ist " << summe;
    return 0;
}