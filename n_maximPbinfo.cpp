#include<iostream>

using namespace std;

/*
Cerinta:
Se dau n numere întregi. Calculaţi cel mai mare dintre cele n numere date.
Date intrare:
Programul citește de la tastatură numărul n, iar apoi n numere întregi, separate prin spaţii.
Date iesire:
Programul afișează pe ecran numărul MAX, reprezentând cel mai mare dintre cele n numere date.
*/

int main() {
  int n, MAX = 0, numar;

  cin>>n;
  for (int i = 1; i <= n; ++i) {
    cin>>numar;
    if (numar > MAX) {
      MAX = numar;
    }
  }
  cout<<MAX;
  return 0;
}
