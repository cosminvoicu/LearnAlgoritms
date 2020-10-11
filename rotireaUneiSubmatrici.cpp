#include<iostream>

using namespace std;

int aux[51][51];
void rotireStanga (int matrice[51][51],int n,int m) {

  for(int linie=1;linie<=n;++linie)
   {
       for(int coloana=1;coloana<=m;++coloana)
  {
     aux[m-coloana+1][linie]=matrice[linie][coloana];
  }
  }
}

int main () {
  int v[51][51],submatrice[51][51], n, m, x, z, l;
  cin>>n>>m;
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=m; ++j) {
      cin>>v[i][j];
    }
  }
  cin>>x>>z>>l;
  int ii =1, jj = 1;
  for ( int i = x; i<l+x; ++i) {
    jj = 1;
    for (int j = z; j<z+l; ++j) {
      submatrice[ii][jj] = v[i][j];
      ++jj;

    }
    ++ii;
  }
  rotireStanga (submatrice,ii-1,jj-1);

  ii =1, jj = 1;
  for ( int i = x; i<l+x; ++i) {
    jj = 1;
    for (int j = z; j<z+l; ++j) {
      v[i][j] = aux[ii][jj];
      ++jj;

    }
    ++ii;
  }

  for ( int i = 1; i<=n; ++i) {
    for ( int j = 1; j<=m; ++j) {
      cout<<v[i][j]<<' ';
    }
      cout<<"\n";
      }

  return 0;
}
