#include<iostream>

using namespace std;

void generareTriunghi(int n) {
  if ( n == 0 )
    return;
  generareTriunghi(n-1);
  for ( int i = 1; i<=n; ++i)
    cout<<i<<' ';
  cout<<"\n";
}

int main() {
  generareTriunghi(4);
  return 0;
}
