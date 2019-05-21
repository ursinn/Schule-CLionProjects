#include <windows.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    POINT mPos;

    while(true)
    {
        GetCursorPos(&mPos);
        cout << "X:" << mPos.x << " Y:" << mPos.y << endl;
        //Kill when over Kill Button - Headline
        if(mPos.x >= 1340 && mPos.x <= 1354 && mPos.y >= 50 && mPos.y <= 70) {
            return 0;
        }
        //Kill when over Kill Button - Side
        if(mPos.x >= 27 && mPos.x <= 50 && mPos.y >= 609 && mPos.y <= 620) {
            return 0;
        }
        system("CLS");
    }
}