#include <iostream>

using namespace std;

void write(int[]);

int main() {
    int a[7] = {2, 4, 6, 8, 6, 4, 2};
    write(a);
    return 0;
}

void write(int a[]) {
    for (int i=0; i<7; i++) {
        for (int j=0; j<a[i]; j++) {
            cout << "-";
        }
        cout << " Prozent " << a[i] << endl;
    }
}