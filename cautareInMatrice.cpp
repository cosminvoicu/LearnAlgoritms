#include<iostream>

using namespace std;

int main() {

  int matrice[501][501], maxime[501], maxim = 0, n, m, k, x;
  bool gasit = false;

  cin >> n >> m;

  for (int i = 1; i<=n; ++i ) {
    maxim = 0;
    for ( int j = 1; j<=m; ++j ) {
      cin >> matrice[i][j];
      if ( matrice[i][j] > maxim ) {
        maxim = matrice[i][j];
        maxime[i] = maxim;
      }
    }
  }

  cin >> k;

  for ( int i = 1; i<=k; ++i ) {
    cin >> x;
    gasit = false;

    for ( int linieCurenta = 1; linieCurenta<=n; ++linieCurenta ) {
      if ( gasit ) break;
      if ( maxime[linieCurenta] >= x )
      for ( int coloanaCurenta = 1; coloanaCurenta<=m; ++coloanaCurenta ) {
        //cout << matrice[linieCurenta][coloanaCurenta] << ' ';

        if ( x == matrice[linieCurenta][coloanaCurenta]) {
          gasit = true;
          break;
        }

        if ( x < matrice[linieCurenta][coloanaCurenta] ) break;
      }
      //cout << "\n";
    }
    if ( gasit ) cout << "DA" << "\n";
    else cout << "NU" << "\n";
  }

  return 0;
}
