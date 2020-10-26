#include<iostream>

using namespace std;

int main() {
  int matrice[501][501], sir[501], n, m, q;
  bool gasit = false;
  cin >> n >> m;

  for ( int i = 1; i<=n; ++i ) {
    for ( int j = 1; j<=m; ++j ) {
      cin >> matrice[i][j];
    }
  }
  cin >> q;
  for ( int i = 1; i<=q; ++i ) {
    for ( int j = 1; j<=m; ++j ) {
      cin >> sir[j];
    }
    gasit = false;
    for ( int linieCurenta = 1; linieCurenta<=n; ++linieCurenta ) {
      int contor = 0;
      if ( matrice[linieCurenta][1] == sir[1] )
      for ( int coloana = 1; coloana<=m; ++coloana ) {
        if ( matrice[linieCurenta][coloana] == sir[coloana] ) ++contor;
      }
      if ( contor == m ) {
        cout << "DA" << "\n";
        gasit = true;
        break;
      } else {
        gasit = false;
      }
    }
    if ( !gasit ) {
      cout << "NU" <<"\n";
    }
  }

  return 0;
}
