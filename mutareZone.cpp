#include<iostream>

using namespace std;

int main() {
  int v[51][51], copyV[51][51],n;
  cin>>n;
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=n; ++j) {
      cin>>v[i][j];
      if ( i == j || i+j==n+1) {
        copyV[i][j] = v[i][j];
    }
  }
}
 for (int i = 1; i<=n; ++i) {
   for (int j = 1; j<=n; ++j) {
     if ( !(i == j || i+j==n+1) ) {
       copyV[i][j] = v[n-j+1][i];
     }
   }
 }

 for (int i = 1; i<=n; ++i) {
   for (int j = 1; j<=n; ++j) {
     cout<<copyV[i][j]<<' ';
   }
   cout<<"\n";
 }
  return 0;
}
