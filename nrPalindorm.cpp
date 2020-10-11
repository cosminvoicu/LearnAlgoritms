#include<iostream>
using namespace std;

int inv(int a) {
    int inversA = 0;
    while (a) {
        inversA*=10;
        inversA+=a%10;
        a/=10;
    }
    return inversA;
}
int ePalindrom(int a) {
    if (a == inv(a)) {
        return 1;
    } else {
        return 0;
    }
}
int nrPal (int a, int b) {
    int palindrom = 0;
    for (int i = a; i<=b; ++i) {
        if (ePalindrom(i)) {
            ++palindrom;
        }
    }
    return palindrom;
}
int main (){
  cout << nrPal(7, 11);
}
