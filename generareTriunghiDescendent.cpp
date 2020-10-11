#include<iostream>

using namespace std;

void generareTriunghiDesc(int n) {
  if ( n == 0 )
    return;
    for ( int i = 1; i<=n; ++i)
      cout<<i<<' ';
    cout<<"\n";
    generareTriunghiDesc(n-1);
}

int main() {
  generareTriunghi(4);
  return 0;
}
