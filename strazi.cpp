#include<iostream>

using namespace std;

int main() {
  int mt[51][51],n,m,sumMax = 0,sumLineMax,indx;
  cin>>n>>m;
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=m; ++j) {
      cin>>mt[i][j];
    }
  }
  for ( int i = 1; i<=n; ++i) {
      sumLineMax = 0;
    for (int j = 1; j<=m; ++j) {
      sumLineMax+=mt[i][j];
    }
    if (sumLineMax>sumMax) {
      sumMax = sumLineMax;
      indx = i;
    }
  }
  cout<<indx;
  return 0;
}
