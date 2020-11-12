#include<iostream>
#include<string>
//#include<fstream>


using namespace std;

//ifstream fin("text.in");

int main() {
    string linie, text[21];
    int maxim = 0, contor = 1;
    while(getline(cin, linie)) {
        if(maxim < linie.size()) {
            maxim = linie.size();
        }
        while(linie[linie.size() - 1]  == '*') {
            linie.resize(linie.size() - 1);
        }
        text[contor++] = linie;
    }
    //fin.close();
    for(int i = 1; i < contor; ++i) {
        int lungime = text[i].size();
        if(maxim - lungime > 0) {
            for(int j = 1; j <= maxim - lungime; ++j) {
                text[i] = '*' + text[i];
            }
        }
    }
    //cout << "\n";
    for(int i = 1; i < contor; ++i) {
        cout << text[i] << "\n";
    }
    return 0;
}
