#include<iostream>
#include<string>

using namespace std;

const int nrMaxCaractere = 102;

int countNumarCaractere(char sir[]) {
  int numarCaractere = 0;

  for ( int i = 0; sir[i]; ++i ) {
    ++numarCaractere;
  }
  return numarCaractere;
}

int main() {
  char sir[nrMaxCaractere], sirN[nrMaxCaractere];
  int N, contor = 0;

  cin >> N;
  cin.get();

  cin.getline(sir, nrMaxCaractere);
  int numarCaractereSir = countNumarCaractere(sir);

  for ( int i = 1; i<=N; ++i ) {
    cin.getline(sirN, nrMaxCaractere);
    bool gasit = true;
    int numarCaractereSirN = countNumarCaractere(sirN)-1;
    int x = numarCaractereSir - 1;
    while (x>=0) {
      if (sirN[numarCaractereSirN--] != sir[x--]) {
        gasit = false;
      }
    }
    if ( numarCaractereSirN == -1 ) gasit = false;

    if (gasit) {
      ++contor;
    }
  }

  cout << contor;
  return 0;
}
