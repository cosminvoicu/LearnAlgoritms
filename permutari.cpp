#include<fstream>
//#include<iostream>

using namespace std;

ifstream fin("permutari2.in");
ofstream fout("permutari2.out");

int sir[20], sirFrecventa[20],n, sirCitit[20];

void afisare() {
  for ( int i = 1; i<=n; ++i ) {
    fout << sir[i] << ' ';
  }
  fout << "\n";
}

void back(int k) {
  for ( int i = 1; i<=n; ++i ) {
    if (!sirFrecventa[i]) {
      sir[k] = sirCitit[i];
      sirFrecventa[i] = 1;

      if ( k < n ) {
        back(k+1);
      } else
          afisare();
        sirFrecventa[i] = 0;
    }
  }
}

int main() {

  fin >> n;
  for ( int i = 1; i<=n; ++i ) {
    fin >> sirCitit[i];
  }
  for ( int i = 1; i<n; ++i ) {
    for ( int j = i + 1; j<=n; ++j ) {
      if (sirCitit[i] > sirCitit[j]) {
        int aux = sirCitit[i];
        sirCitit[i] = sirCitit[j];
        sirCitit[j] = aux;
      }
    }
  }
  fin.close();
  back(1);
  fout.close();
  return 0;
}
