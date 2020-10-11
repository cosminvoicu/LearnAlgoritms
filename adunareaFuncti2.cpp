#include<iostream>

using namespace std;

void aduna(int a[1001], int b[1001]) {
  int suma = 0,n,contor;
  if (a[0]>b[0]) {
    n = a[0];
  }  else {
      n = b[0];
    }
  if (a[0]>b[0])
    for ( int i = b[0] + 1; i <= a[0]; ++i)
      b[i] = 0;
  else
    for ( int i = a[0] + 1; i<= b[0]; ++i)
      a[i] = 0;

  for ( int i = 1; i<=n; ++i) {
    suma += a[i] + b[i];
    a[i] = suma % 10;
    suma /= 10;
    if (i == n && suma) {
      contor = n;
      ++ contor;
      a[contor] = suma;
    }
  }
  if ( contor > n)
    n = contor;
  a[0] = n;
}


int main() {

  int a[1001] = {5, 1, 2,3,4,5} , b[1001] = {7, 9, 9, 9,9,9,9,9};
  aduna(a,b);
  int n = a[0];
  for ( int i = 0; i<=n; ++i) {
    cout<<a[i]<<' ';
  }
  return 0;
}
