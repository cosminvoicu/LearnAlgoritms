#include<iostream>

using namespace std;

int aux[51][51];
void rotireStanga (int& N,int& M, int matrice[51][51], int k) {

  if ( k == 0 )
    return;
  else {
    for(int linie=1;linie<=N;++linie)
     {
         for(int coloana=1;coloana<=M;++coloana)
    {
       aux[M-coloana+1][linie]=matrice[linie][coloana];

    }
    }
    for ( int i = 1; i<=M; ++i) {
      for ( int j = 1; j<=N; ++j ) {
        matrice[i][j] = aux[i][j];
      }
    }
    int aux = N;
    N = M;
    M = aux;
    rotireStanga( N, M,matrice, k-1);
  }
}

int main() {
  int  n, m ,matriceX[51][51];
  cin>>n>>m;
  for (int i = 1; i<=n;++i ) {
    for (int j = 1; j<=m; ++j ) {
      cin>>matriceX[i][j];
    }
  }
  cout<<n<<m<<"\n";
  rotireStanga(n,m,matriceX,4);

  cout<<"\n";
  for (int i = 1;i<=n; ++i) {
    for(int j = 1; j<=m; ++j) {
      cout<<matriceX[i][j]<<' ';
    }
    cout<<"\n";
  }
  return 0;
}
