#include<iostream>

using namespace std;

int main() {
  int sir[1001],n;
  bool gasit = false;
  cin>>n;
  for (int i = 1; i<=n; ++i) {
    cin>>sir[i];
  }
  for ( int i = 1; i<n; ++i) {
    gasit = false;
    for ( int j = i+1; j<=n; ++j) {
      if ( sir[i] < sir[j] ) {
        cout<<sir[j]<<' ';
        gasit = true;
        break;
      }
    }
    if ( gasit == false)
      cout<<-1<<' ';
  }
  cout<<-1;
  return 0;
}
