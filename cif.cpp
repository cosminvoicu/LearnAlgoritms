#include<iostream>

using namespace std;

int rez = 0;
int cif(int n, int c) {
  if (n == 0)
    return 0;
  cif(n/10,c);
  if(n%10 == c)
    ++rez;
  return rez;
}

int main() {
  cout << cif(2345, 1);
  return 0;
}
