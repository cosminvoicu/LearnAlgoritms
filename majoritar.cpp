#include<iostream>

using namespace std;

#define nMax 100001


int main() {

  int sir[nMax], n, numarRepetat = 0, anterior = -1, contor = 0;

  cin>>n;

  for ( int i = 1; i<=n; ++i ) {
    cin>>sir[i];
    if ( anterior == sir[i] )
      numarRepetat = sir[i];
    else
      anterior = sir[i];
  }
  for (int i = 1; i<=n; ++i) {
    if ( sir[i] == numarRepetat ) {
      ++contor;
    }
  }

  if ( contor > n/2 )
    cout<<"DA"<<' '<<numarRepetat;
  else
    cout<<"NU";

  return 0;
}
