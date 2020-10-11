#include<iostream>

using namespace std;

int main() {
  int mt[101][101], m, n, suma, g, i, ii, j, jj;

  cin>>n>>m;
  for (int k = 1; k<=n; ++k) {
    for (int l = 1; l<=m; ++l) {
      cin>>mt[k][l];
    }
  }
  cin>>g;
  for (int x = 1; x<=g; ++x) {
    suma = 0;
    cin>>i>>j>>ii>>jj;
    for (int k = i; k<= ii; ++k) {
      for (int l = j; l<=jj; ++l) {
        suma+=mt[k][l];
      }
    }
    cout<<suma<<"\n";
  }
  return 0;
}
