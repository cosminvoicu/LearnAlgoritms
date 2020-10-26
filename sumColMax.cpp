#include<iostream>

using namespace std;

int main() {
  int mt[1001][1001],m,n,sumCol,jj=0,sumColMax = -1000001;
  cin>>n>>m;
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=m; ++j) {
      cin>>mt[i][j];
      }
    }

  for ( int j = 1; j<=m; ++j ) {
    sumCol = 0;
    for ( int i = 1; i<= n; ++i ) {

      sumCol+=mt[i][j];
    }

    if (sumCol>sumColMax) {
      sumColMax = sumCol;
      jj = j;
    }
  }


    for (int i=1; i<=n; ++i) {
      cout<<mt[i][jj]<<' ';
    }

  return 0;
}
