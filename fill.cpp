#include<iostream>

using namespace std;

int contor = 0;
void fill(int matrice[101][101],int i, int j, int n, int m) {
  if (matrice[i][j] == 1 && (matrice[i+1][j] == 1 && i+1<=n) && (matrice[i-1][j] == 1 && i-1>=1) && (matrice[i][j+1] == 1 && j+1<=m) &&   (matrice[i][j-1] == 1 && j-1>=1)) {
    return;
  } else {
    if (matrice[i+1][j] == 0 && i+1<=n) {
        matrice[i+1][j] = 1;
        cout<<"apel i+1 i "<<i+1<<' '<<"j "<<j<<"\n";
        fill(matrice,i+1,j,n,m);
    }
    if (matrice[i-1][j] == 0 && i-1>=1) {
        matrice[i-1][j] = 1;
        cout<<"apel i-1 i "<<i-1<<' '<<"j "<<j<<"\n";
        fill(matrice, i-1,j,n,m);
    }
    if (matrice[i][j+1] == 0 && j+1<=m) {
        matrice[i][j+1] = 1;
        cout<<"apel j+1 i "<<i<<' '<<"j "<<j+1<<"\n";
        fill(matrice,i,j+1,n,m);
    }
    if (matrice[i][j-1] == 0 && j-1>=1) {
        matrice[i][j-1] = 1;
        cout<<"apel j-1 i "<<i<<' '<<"j "<<j-1<<"\n";
        fill(matrice,i,j-1,n,m);}
  }

}

int main() {
  int matrice[101][101],n,m;
  cin>>n>>m;
  for (int i = 1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      cin>>matrice[i][j];
    }
  }
  for ( int i = 1; i<=n; ++i) {
    for ( int j = 1; j<=m; ++j) {
      if ( matrice[i][j] == 0 ) {
        ++contor;
        fill(matrice,i,j, n, m);
      }
    }
  }
  cout<<contor;
  return 0;
}
