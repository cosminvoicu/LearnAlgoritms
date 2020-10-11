#include<iostream>

using namespace std;

int main() {
  int sir[1001], n, countNumere = 0;
  double medieAritmetica = 0, suma = 0;
  cin>>n;

  for (int i = 1; i<=n; ++i) {
    cin>>sir[i];
    suma += sir[i];
  }
  medieAritmetica = suma/n;

  for (int i = 1; i<=n; ++i) {
    if ( sir[i] > medieAritmetica ) {
      ++countNumere;
    }
  }
  cout<<countNumere;
  return 0;
}
