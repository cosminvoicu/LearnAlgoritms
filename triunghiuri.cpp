#include<iostream>

using namespace std;
/*
a b c
a < b + c
b < a + c
c < a + b
*/
int main() {
  int sir[1000001], n, contor = 0;
  cin>>n;
  for ( int i = 1; i<=n; ++i) {
    cin>>sir[i];
  }
  for ( int i = 1; i <= n-2; ++i ) {
    for ( int j = i + 1; j <= n-1; ++j) {
      for ( int k = j+1; k<=n; ++k ) {
        if ( sir[i] < sir[j] + sir[k] && sir[j] < sir[i] + sir[k] && sir[k] < sir[i] + sir[j])
          ++contor;
      }
    }
  }
  cout<<contor;
  return 0;
}
