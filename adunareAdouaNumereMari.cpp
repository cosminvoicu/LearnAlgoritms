#include<iostream>

using namespace std;

void aduna(int a[], int b[], int rezultat[]) {
  int n,m,suma = 0, contor = 1;
  n = a[0];
  m = b[0];

  if ( n == m ) {
    for (int i = 1; i<=n; ++i) {
      suma += a[i] + b[i];
      rezultat[contor] = suma%10;
      suma/=10;
      if ( i == n && suma) {
        rezultat[++contor] = suma;
      }
      ++contor;
    }
    rezultat[0] = --contor;
  } else if ( n>m ) {
    for ( int i = 1; i<=n; ++i) {
      if ( i<=m ) {
        suma += a[i] + b[i];
        rezultat[contor] = suma%10;
        suma/=10;
        ++contor;
      } else {
        suma += a[i];
        rezultat[contor] = suma%10;
        if (suma != 0)
          suma/=10;
        if ( i == n && suma ) {
          rezultat[++contor] = suma;
        }
        ++contor;
      }
    }
      rezultat[0] = --contor;
    } else if (m>n) {
      for ( int i = 1; i<=m; ++i) {
        if ( i<=n ) {
          suma += a[i] + b[i];
          rezultat[contor] = suma%10;
          suma/=10;
          ++contor;
        } else {
          suma += b[i];
          rezultat[contor] = suma%10;
          if (suma != 0)
            suma/=10;
          if ( i == m && suma ) {
            rezultat[++contor] = suma;
          }
          ++contor;
        }
    }
    rezultat[0] = --contor;
  }
}

int main() {
  int a[] = {5, 1, 2, 2, 5, 8} , b[] = {6, 2, 2, 2, 6, 7,8}, rezultat[1000001];
  aduna(a, b, rezultat);
  int n = rezultat[0];
  for ( int i = 0; i<=n; ++i) {
    std::cout << rezultat[i] << ' ';
  }
  return 0;
}
