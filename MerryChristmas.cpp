#include<iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int sir[500001],n, numar;//, adevar = 1;

  //cout<<rand() % 100 + 123456789<<"\n";
  //cout<<rand() % 100 + 123456789<<"\n";
  //cout<<rand() % 100 + 123456789<<"\n";
  //cout<<rand() % 100 + 123456789<<"\n";
/*  cin>>n;

  for (int i = 1; i<=n; ++i) {
    cin>>sir[i];
  }

  while ( adevar ) {
    numar = rand() % 100 + 123456789;
    for (int i = 1; i<=n; ++i) {
      if ( sir[i] != numar)
        adevar = 0;
      else {
        adevar = 1;
        break;
      }
    }
  }*/
  numar = rand() % 100 + 123456789;
  cout<<numar;

  return 0;
}
