#include<iostream>
#include<iomanip>
using namespace std;

int main() {
  int n, i;
  double contorDivizori = 0, sumaDivizori = 0, medie;

  cin>>n;

  for ( i = 1; i*i < n; ++i) {
    if (n%i == 0) {
      int j = n/i;
      if (i == j) {
        ++contorDivizori;
        sumaDivizori += i;
      } else {
        contorDivizori +=2;
        sumaDivizori = sumaDivizori + i + j;
      }
    }
  }
  if ( i*i == n ) {
    ++contorDivizori;
    sumaDivizori += i;
  }
   medie = sumaDivizori / contorDivizori;
  cout<<fixed<<setprecision(2)<<medie;
  return 0;
}
