#include <iostream>

using namespace std;

void preisdownN(double, double);
void preisdownZ(double* , double*);

int main() {
    double preisApfel = 1.45,preisBirne = 0.85;
    cout << "Preise: " << preisApfel << " " << preisBirne << endl;

    preisdownN(preisApfel, preisBirne);
    cout << "Preise: " << preisApfel << " " << preisBirne << endl;

    preisdownZ(&preisApfel, &preisBirne);
    cout << "Preise: " << preisApfel << " " << preisBirne << endl;

    return 0;
}

void preisdownN(double a, double b) {
    a = a-0.10;
    b = b-0.10;
}


void preisdownZ(double *a, double *b) {
    *a = *a-0.10;
    *b = *b-0.10;
}
