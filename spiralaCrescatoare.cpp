#include<iostream>

using namespace std;

int main() {
  long long int matrice[52][52];
  int n,m;
  cin>>n>>m;

  for (int i = 1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      cin>>matrice[i][j];
    }
  }
  int elementeParcurse = 0;
  int inceputLinie = 1, sfarsitLinie = n, inceputColoana = 1, sfarsitColoana = m, contor = 0;
  long long int sir[10001];

  while (elementeParcurse < n*m) {

    // parcurgerea parti de sus
    for (int j = inceputColoana ; j<=sfarsitColoana; ++j) {
      if (elementeParcurse < n*m) {
        sir[++contor] = matrice[inceputLinie][j];
        //cout<<matrice[inceputLinie][j]<<' ';
        ++elementeParcurse;
      }
    }

    // parcurgere dreapta
    for ( int i = inceputLinie + 1; i<= sfarsitLinie; ++i) {
      if (elementeParcurse < n*m) {
        sir[++contor] = matrice[i][sfarsitColoana];
        //cout<<matrice[i][sfarsitColoana]<<' ';
        ++elementeParcurse;
      }
    }

    // parcurgere partea de jos
    for (int j = sfarsitColoana - 1; j>= inceputColoana; --j) {
      if (elementeParcurse < n*m) {
        sir[++contor] = matrice[sfarsitLinie][j];
        //cout<<matrice[sfarsitLinie][j]<<' ';
        ++elementeParcurse;
      }
    }

    //parcurgere stanga
    for ( int i = sfarsitLinie - 1; i> inceputLinie; --i) {
      if (elementeParcurse < n*m) {
        sir[++contor] = matrice[i][inceputColoana];
        //cout<<matrice[i][inceputColoana]<<' ';
        ++elementeParcurse;
      }
    }

    ++inceputLinie;
    --sfarsitLinie;
    ++inceputColoana;
    --sfarsitColoana;
  }
  bool DA = true;
  for ( int i = 1; i<contor; ++i ) {
    if ( sir[i]>sir[i+1] || sir[i] == sir[i+1]) {
      DA = false;
      break;
    }
  }

  if ( DA ) {
    cout<<"DA";
  } else {
    cout<<"NU";
  }
  return 0;
}
