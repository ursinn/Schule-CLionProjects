#include <iostream>

using namespace std;

int main() {
    int Alter;
    cout << "Gebe ein, wie alt du bist: ";
    cin >> Alter;
    cout << "\n";

    if (Alter < 14) {
        cout << "Du bist ein Kind\n";
    } else if (Alter >= 14 && Alter < 18) {
        cout << "Du bist ein Teenager\n";
    } else {
        cout << "Du bist erwachsen\n";
    }

    getchar();
    return 0;
}