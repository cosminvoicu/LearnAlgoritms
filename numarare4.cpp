#include<iostream>

using namespace std;

int gcd ( int a, int b) {
  if (!b)
    return a;
  return gcd ( b, a%b );
}

int main() {
  int sir[201], n, contor=0;
  cin>>n;

  for ( int i = 1; i<=n; ++i ) {
    cin>>sir[i];
  }

  for ( int i = 1; i<n; ++i ) {
    if ( gcd(sir[i],sir[n]) == 1 )
      ++contor;
  }

  cout<<contor;
  return 0;
}
