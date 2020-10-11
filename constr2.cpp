#include<iostream>

using namespace std;


int prim ( int n ) {
  for ( int i = 2; i<= n/2; ++i) {
    if ( n % i == 0 ) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n, sir[201];

  cin>>n;
  for ( int i = 1; i<=n; ++i ) {
    cin>>sir[i];
  }
  for ( int i = n; i>=1; --i) {
    if ( prim(sir[i]) )
      cout<<sir[i]<<' ';
  }
  return 0;
}
