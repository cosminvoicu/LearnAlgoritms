#include<iostream>
#include<string>

using namespace std;

int contor = 0;
void zeroCount(int matrice[101][101],int i, int j, int n, int m,int& zero) {
  if (matrice[i][j] == 1 && (matrice[i+1][j] == 1 && i+1<=n) && (matrice[i-1][j] == 1 && i-1>=1) && (matrice[i][j+1] == 1 && j+1<=m) &&   (matrice[i][j-1] == 1 && j-1>=1)) {
    return;
  }

    if (matrice[i+1][j] == 0 && i+1<=n) {
        ++zero;
        matrice[i+1][j] = 1;
        zeroCount(matrice,i+1,j,n,m,zero);
    }
    if (matrice[i-1][j] == 0 && i-1>=1) {
        ++zero;
        matrice[i-1][j] = 1;
        zeroCount(matrice, i-1,j,n,m,zero);
    }
    if (matrice[i][j+1] == 0 && j+1<=m) {
        ++zero;
        matrice[i][j+1] = 1;
        zeroCount(matrice,i,j+1,n,m,zero);
    }
    if (matrice[i][j-1] == 0 && j-1>=1) {
        ++zero;
        matrice[i][j-1] = 1;
        zeroCount(matrice,i,j-1,n,m,zero);}

}

int main() {
 int matrice[101][101],n,m, zero = 0, maxZero = 0, linie = 0;
  char matriceC[102];
  cin>>n>>m;
  cin.get();
  for ( int i = 1; i<=n; ++i) {
    cin.getline(matriceC,101);
    ++linie;
  for ( int j = 0; matriceC[j]; ++j)
    matrice[linie][j+1] = matriceC[j] - '0';
  }

  for ( int i = 1; i<=n; ++i) {
    for ( int j = 1; j<=m; ++j) {
      if ( zero > maxZero) {
        maxZero = zero;
      }
      if ( matrice[i][j] == 0 ) {

        zero = 0;
        zeroCount(matrice,i,j, n, m,zero);
      }
    }
  }

  cout<<maxZero;

  return 0;
}
