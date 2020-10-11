#include<iostream>

using namespace std;

int sumaCifre ( int numar ) {
  if ( numar == 0 )
    return 0;
  return numar%10 + sumaCifre(numar/10);
}

int main() {
  int sir1[201], n;
  cin>>n;

  for ( int i = 1; i<=n; ++i) {
    cin>>sir1[i];
  }

  for ( int i = 1; i<=n; ++i) {
    cout<<sir1[i] % sumaCifre(sir1[i])<<" ";
  }


  return 0;
}
