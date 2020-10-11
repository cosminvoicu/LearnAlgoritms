#include<iostream>

using namespace std;

int sumaCifre ( int numar ) {
  if ( numar == 0 )
    return 0;
  return numar%10 + sumaCifre(numar/10);
}

int main() {
  int sir[200],n,contor = 0;
  cin>>n;

  for ( int i = 1; i<=n; ++i ) {
    cin>>sir[i];
    sir[i] = sumaCifre(sir[i]);
  }

  for ( int i = 1; i<=n; ++i) {
    for ( int j = i+1; j<=n; ++j) {
      if ( sir[i] == sir[j] )
        ++contor;
    }
  }

  cout<<contor;

  return 0;
}
