#include<iostream>
#include<string>

using namespace std;

int countNumarCaractere(char sir[]) {
  int numarCaractere = 0;

  for ( int i = 0; sir[i]; ++i ) {
    ++numarCaractere;
  }
  return numarCaractere;
}

int main() {
  char sir[102];
  cin.getline(sir,102);
  int lungimeSir = countNumarCaractere(sir);

  for ( int i = 1; i<=lungimeSir; ++i ) {
    for ( int j = lungimeSir - i; sir[j]; ++j) {
      cout << sir[j];
    }
    cout << "\n";
  }
  return 0;
}
