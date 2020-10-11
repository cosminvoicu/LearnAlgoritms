#include<iostream>

using namespace std;

int main() {
  int sir[101], n,sumaValoriPare = 0, sumaValoriPozitiPare = 0, div10Count = 0, sumadiv3PozImpar = 0;

  cin>>n;
  for ( int i = 1; i<=n; ++i) {
    cin>>sir[i];
  }
  for (int i = n; i >= 1; --i) {
    if ( sir[i] % 2 == 0 ) {
      sumaValoriPare += sir[i];
    }
    if ( i % 2 == 0 ) {
      sumaValoriPozitiPare += sir[i];
    }
    if ( sir[i] % 10 == 0) {
      ++div10Count;
    }
    if ( sir[i] % 3 == 0 && i % 2 != 0 ) {
      sumadiv3PozImpar += sir[i];
    }
    cout<<sir[i]<<' ';
  }
  cout<<"\n";
  cout<<sumaValoriPare<<"\n"<<sumaValoriPozitiPare<<"\n"<<div10Count<<"\n"<<sumadiv3PozImpar;

  return 0;
}
