#include<iostream>
#include<cstring>

using namespace std;

int este_numar(char c)
{
    if(('0'<=c&&c<='9'))
        return 1;
    return 0;
}
 int matriceRezultate[10001] = {0};

int main() {
  int n, numarX = 0, numarY = 0, max = 0, muncitor;

  char linie[100003];

  cin >> n;
  cin.get();
  for ( int i = 1; i<=n; ++i ) {
    cin.getline(linie,100001);
    numarX = 0;
    numarY = 0;

    int contorNumar = 11;
    while ( este_numar(linie[contorNumar]) ) {
      numarX *= 10;
      numarX += linie[contorNumar] - '0';
      ++contorNumar;
    }

    for ( int j = contorNumar; linie[j]; ++j ) {
      if (este_numar(linie[j])) {
        numarY *= 10;
        numarY += linie[j] - '0';
      }
    }

    matriceRezultate[numarX] += numarY;
  }
  for ( int i = 0; i<=10000; ++i ) {
    if ( matriceRezultate[i] > max ) {
      max = matriceRezultate[i];
      muncitor = i;
    }
  }
  cout << muncitor;
  return 0;
}
