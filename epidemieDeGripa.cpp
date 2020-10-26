#include<iostream>
#include<math.h>

using namespace std;

int matrice[101][101];
int main() {
  int n, m, x, y;

  cin >> n >> m;
  cin >> x >> y;

  for ( int linieCurenta = 1; linieCurenta<=n; ++linieCurenta ) {
    for ( int coloanaCurenta = 1; coloanaCurenta<=m; ++coloanaCurenta ) {
      if ( linieCurenta == x || coloanaCurenta == y )
      matrice[linieCurenta][coloanaCurenta] = sqrt (pow (linieCurenta - x, 2) + pow (coloanaCurenta - y, 2) * 1.0);
    }
  }

  for ( int i = 1; i<=n; ++i ) {
      int x = matrice[i][y];
    for ( int j = y-1; j>=1; --j ) {
      ++x;
      matrice[i][j] = x;
    }
  }
  for ( int i = 1; i<=n; ++i ) {
    int x = matrice[i][y];
    for ( int j = y + 1; j<=m; ++j ) {
      ++x;
      matrice[i][j] = x;
    }
  }

  for ( int i = 1; i<=n; ++i ) {
    for ( int j = 1; j<=m; ++j ) {
      cout << matrice[i][j] << ' ';
    }
    cout << "\n";
  }

  return 0;
}
