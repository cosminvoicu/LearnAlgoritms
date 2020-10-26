#include<iostream>

using namespace std;

#define maxN 101
#define maxM 101

int main() {
  int sir1[maxN], sir2[maxM], n, m, maxSir2 = 0, contor = 0;
  cin>>n;

  for ( int i = 1; i<=n; ++i) {
    cin>>sir1[i];
  }
  cin>>m;
  for ( int i = 1; i<=m; ++i) {
    cin>>sir2[i];
    if ( sir2[i] >  maxSir2 ) {
      maxSir2 = sir2[i];
    }
  }
  for (int i = 1; i<=n; ++i) {
    if ( sir1[i] > maxSir2 )
      ++contor;
  }

  cout<<contor;
  return 0;
}
