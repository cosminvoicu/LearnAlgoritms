#include<iostream>

using namespace std;

int main() {
  int sir[201], numarElementeNenule = 0, medieAritmetica, suma = 0, n;

  cin>>n;

  for ( int i = 1; i<=n; ++i ) {
    cin>>sir[i];
    if ( sir[i] != 0  ) {
      ++numarElementeNenule;
      suma += sir[i];
    }
  }
  medieAritmetica = suma / numarElementeNenule;

  for ( int i = 1; i<=n; ++i ) {
    if ( sir[i] != 0 )
      cout<<sir[i]<<' ';
    else
      cout<<medieAritmetica<<' ';
  }

  return 0;
}
