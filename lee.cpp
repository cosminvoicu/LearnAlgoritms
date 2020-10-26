#include<iostream>

using namespace std;

const int NDMAX = 504;

const int addLin[] = {-1,0,1,0};
const int addCol[] = {0,1,0,-1};

struct Pos {
  int linie, coloana;
};

Pos a, b;
int in, sf, n, m;

Pos q[NDMAX*NDMAX];
Pos stiva[NDMAX*NDMAX];
int matrice[NDMAX][NDMAX];

void citire() {
  cin >> n >> m;
  for ( int i = 1; i<=n; ++i ) {
    for ( int j = 1; j<=m; ++j ) {
      cin >> matrice[i][j];
    }
  }
  cin >> a.linie >> a.coloana;
  cin >> b.linie >> b.coloana;
}

void bordare() {
  //orizontal
  for ( int i = 0; i<=n+1; ++i ) {
    matrice[i][0] = matrice[i][m+1] = -1;
  }
  //vertical
  for ( int j = 1; j<= m; ++j ) {
    matrice[0][j] = matrice[n+1][j] = -1;
  }
}

void lee() {
  q[0] = a;
  in = sf = 0;
  matrice[a.linie][a.coloana] = 1;

  Pos pos;
  while ( in <= sf && !matrice[b.linie][b.coloana] ) {

    pos = q[in++];
    Pos ngh;

    for ( int k = 0; k<4; ++k ) {
      ngh.linie = pos.linie + addLin[k];
      ngh.coloana = pos.coloana + addCol[k];

      if ( !matrice[ngh.linie][ngh.coloana]) {
        matrice[ngh.linie][ngh.coloana] = matrice[pos.linie][pos.coloana] + 1;
        q[sf++] = ngh;
      }
    }
   }
}

void afisare() {
  if ( matrice[b.linie][b.coloana] == 0 ) cout << "Nu exista drum intre cele 2 puncte";
  else
  cout << matrice[b.linie][b.coloana];
}

int main () {
  citire();
  bordare();
  lee();
  afisare();

  return 0;
}
