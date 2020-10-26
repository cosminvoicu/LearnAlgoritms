#include<iostream>
#include<cstring>
#include <ctype.h>

using namespace std;


int sirFrecventa[27] = {0};
int main() {
    char linie[500];
    char maxC;
    while(cin.getline(linie, 500)) {
        int lungimeSir = strlen(linie);
        for(int i = 0; i < lungimeSir; ++i) {
            ++sirFrecventa[tolower(linie[i])];
        }
        int  max = 0;
        for(char c = 'a'; c <= 'z'; c++) {
            if(sirFrecventa[c]) {
                if(sirFrecventa[c] > max) {
                    max = sirFrecventa[c];
                    maxC = c;
                }
            }
        }
    }
    cout << maxC;
    return 0;
}
