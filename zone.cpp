#include<iostream>

using namespace std;

int main() {
  int v[51][51],n;
  cin>>n;
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=n; ++j) {
      if ( i == j ) {
        v[i][j] = 0;
      } else if (i+j == n+1) {
        v[i][j] = 0;
      } else if (j>i && j<n+1-i) {
        v[i][j] = 1;
      } else if (j<i && j<n+1-i) {
        v[i][j] = 4;
      } else if (j>i && j>n+1-i) {
          v[i][j] = 2;
      } else if (j<i && j>n+1-i){
        v[i][j] = 3;
      }
    }
  }
  for ( int i = 1; i<=n; ++i) {
    for ( int j = 1; j<=n; ++j) {
      cout<<v[i][j]<<' ';
    }
    cout<<"\n";
  }
  return 0;
}
