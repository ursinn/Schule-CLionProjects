#include <iostream>
#include <ctime>

using namespace std;

int random() {
    return (rand() % 41+1);
}


int main() {
    srand(time(NULL));
    for (int i=0; i<6; i++) {
        int a = i+1;
        cout << "Zahl " << a << ": " << random() << "\n";
    }
    cout << "Glueckszahl: " << (rand() % 5+1);
    return 0;
}