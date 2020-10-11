#include<iostream>

using namespace std;

int main() {
  int sir1[201],n, sumaElemente = 0;
  cin>>n;

  for ( int i = 1; i <= n; ++i) {
    cin>>sir1[i];
    sumaElemente += sir1[i];
  }
  for ( int i = 1; i<=n; ++i ) {
    cout<<sumaElemente - sir1[i]<<' ';
  }
  return 0;
}
