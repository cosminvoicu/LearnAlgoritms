/*
Cerința
Scrieți un program care determină câte sticle de x litri cu apă trebuie deschise pentru a umple un vas de y litri.

Date de intrare
Programul citește de la tastatură numerele naturale x și y.

Date de ieșire
Programul va afișa pe ecran numărul n, reprezentând numărul de sticle ce trebuie deschise.

Restricții și precizări
1 ≤ x,y ≤ 1.000.000 și sunt numere naturale
*/

#include<iostream>


using namespace std;

int main(int argc, char const *argv[]) {
  int sticleX, vasY, nSticle;
  cin>>sticleX>>vasY;

  vasY % sticleX == 0 ? nSticle = vasY / sticleX : nSticle = (vasY / sticleX) + 1;

  std::cout << nSticle << '\n';
  return 0;
}
