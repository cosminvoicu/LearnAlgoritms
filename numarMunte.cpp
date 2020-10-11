#include<iostream>

using namespace std;
/*
strict crescator adica sir[i] < sir[i+1]
strict descrescator adica sir[i] > sir[i+1]
15965

cifra = 5
cifraCurenta = 6
strictCrescator = true;
cifra = 6
cifraCurenta = 9
strictCrescator = true;
cifra = 9
cifraCurenta = 5


*/
int numarCifre ( int n ) {
  if ( n == 0 )
    return 0;
  return 1 + numarCifre(n/10);
}


int main() {
  int sir[11], n, m;
  long long int sir2[200003];
  bool strictCrescator = false , strictDescrescator = false;
  cin>>n;

  for ( int i = 1; i<= n; ++i ) {
    cin>>sir[i];
  }

  for ( int i = 1; i<=n; ++i ) {
    m = numarCifre(sir[i]);
    int numar = sir[i];
    strictCrescator = false;
    strictDescrescator = false;
    for ( int j = m; j>=1; --j ) {
      sir2[j] = numar % 10;
      numar /= 10;
    }
    for ( int k = 1; k<m; ++k ) {
      if ( sir2[k] < sir2[k+1] && strictDescrescator == false ) {
        strictCrescator = true;
      } else if ( sir2[k] > sir2[k+1] && strictCrescator == true ) {
          strictDescrescator = true;
    } else {
        strictDescrescator = false;
        break;
    }

  }
  if ( strictCrescator && strictDescrescator )
    cout<<1<<"\n";
  else
    cout<<0<<"\n";
}

  return 0;
}
