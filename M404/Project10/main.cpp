#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct mystruct {
    bool euro;
    float kurs;
    float geld_a;
    float geld_b;
};

void in(mystruct *a) {
    int i;
    cout << "Franken zu Euro (1) oder Euro zu Franken (...) \n";
    cin >> i;
    if (i == 1) {
        a->euro = true;
    } else {
        a->euro = false;
    }
    cout << "Kurs: \n";
    cin >> a->kurs;
    cout << "\n Geld:";
    cin >> a->geld_a;
    a->geld_b = a->geld_a * a->kurs;
    a->geld_b = floor(a->geld_b * 20 + 0.5)/20;

}

int main() {
    mystruct a;
    in(&a);
    if (a.euro) {
        cout << "Ihre Euros: " << a.geld_b;
    } else {
        cout << "Ihre Franken: " << a.geld_b;
    }
    return 0;
}
