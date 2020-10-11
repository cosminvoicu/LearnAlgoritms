#include<iostream>
#include<iomanip>

using namespace std;

int main() {
  double saptamana, medieAritmetica,suma = 0,x;
  int n, contor;
  cin>>n;
  for ( int i = 1; i<= n/4; ++i) {
    contor = 1;
    suma = 0;
    while ( contor != 5) {
      cin>>x;
      suma+=x;
      ++contor;
    }
    medieAritmetica = suma / 4;
    cout<<fixed<<setprecision(3)<<medieAritmetica<<' ';
  }
  return 0;
}
