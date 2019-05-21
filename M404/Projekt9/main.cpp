#include <iostream>
#include <regex>

using namespace std;

bool checkString(string);
void decode(string, int);
void encode(string, int);

char Abc[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char TempAbc[26] = {0};


int main() {
    encode("A", 15);
    return 0;
}

bool checkString(string s) {
    for (int i=0; i<s.size(); i++) {
        for (int j=0; j<26; j++) {
            if (s[i] == Abc[j])
                break;
        }
    }
    return true;
}

void decode(string s, int key) {
    for(int i=0; i<26; i++) {
        TempAbc[i] = Abc[key-i];
    }
    string s2 = "";
    for (int i=0; i<s.size(); i++) {
        switch (s[i]) {
            case 'A':
                s2[i] = TempAbc[0];
            case 'B':
                s2[i] = TempAbc[1];
            case 'C':
                s2[i] = TempAbc[2];
            case 'D':
                s2[i] = TempAbc[3];
            case 'E':
                s2[i] = TempAbc[4];
            case 'F':
                s2[i] = TempAbc[5];
            case 'G':
                s2[i] = TempAbc[6];
            case 'H':
                s2[i] = TempAbc[7];
            case 'I':
                s2[i] = TempAbc[8];
            case 'J':
                s2[i] = TempAbc[9];
            case 'K':
                s2[i] = TempAbc[10];
            case 'L':
                s2[i] = TempAbc[11];
            case 'M':
                s2[i] = TempAbc[12];
            case 'N':
                s2[i] = TempAbc[13];
            case 'O':
                s2[i] = TempAbc[14];
            case 'P':
                s2[i] = TempAbc[15];
            case 'Q':
                s2[i] = TempAbc[16];
            case 'R':
                s2[i] = TempAbc[17];
            case 'S':
                s2[i] = TempAbc[18];
            case 'T':
                s2[i] = TempAbc[19];
            case 'U':
                s2[i] = TempAbc[20];
            case 'V':
                s2[i] = TempAbc[21];
            case 'W':
                s2[i] = TempAbc[22];
            case 'X':
                s2[i] = TempAbc[23];
            case 'Y':
                s2[i] = TempAbc[24];
            case 'Z':
                s2[i] = TempAbc[25];
            default:
                s2[i] = 0;
        }
    }
    cout << s2;
}

void encode(string s, int key) {
    for(int i=0; i<26; i++) {
        TempAbc[i] = Abc[i+key];
    }
    string s2 = "";
    for (int i=0; i<s.size(); i++) {
        switch (s[i]) {
            case 'A':
                s2[i] = TempAbc[0];
            case 'B':
                s2[i] = TempAbc[1];
            case 'C':
                s2[i] = TempAbc[2];
            case 'D':
                s2[i] = TempAbc[3];
            case 'E':
                s2[i] = TempAbc[4];
            case 'F':
                s2[i] = TempAbc[5];
            case 'G':
                s2[i] = TempAbc[6];
            case 'H':
                s2[i] = TempAbc[7];
            case 'I':
                s2[i] = TempAbc[8];
            case 'J':
                s2[i] = TempAbc[9];
            case 'K':
                s2[i] = TempAbc[10];
            case 'L':
                s2[i] = TempAbc[11];
            case 'M':
                s2[i] = TempAbc[12];
            case 'N':
                s2[i] = TempAbc[13];
            case 'O':
                s2[i] = TempAbc[14];
            case 'P':
                s2[i] = TempAbc[15];
            case 'Q':
                s2[i] = TempAbc[16];
            case 'R':
                s2[i] = TempAbc[17];
            case 'S':
                s2[i] = TempAbc[18];
            case 'T':
                s2[i] = TempAbc[19];
            case 'U':
                s2[i] = TempAbc[20];
            case 'V':
                s2[i] = TempAbc[21];
            case 'W':
                s2[i] = TempAbc[22];
            case 'X':
                s2[i] = TempAbc[23];
            case 'Y':
                s2[i] = TempAbc[24];
            case 'Z':
                s2[i] = TempAbc[25];
            default:
                s2[i] = 0;
        }
    }
    cout << s2;
}