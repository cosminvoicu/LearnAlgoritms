/*
Cerinţa
Să se scrie un program care determină maximul a două numere întregi citite de la tastatură.

Date de intrare
Programul va citi de la tastatură două numere întregi.

Date de ieşire
Programul va afişa pe ecran cel mai mare dintre cele două numere citite.

Restricţii şi precizări
valorile absolute ale numerelor citite vor fi mai mici decât 2.000.000.000
*/
#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int primulNumar, doileaNumar;
  cin>>primulNumar>>doileaNumar;

  if(primulNumar>doileaNumar) {
    std::cout << primulNumar << '\n';
  } else {
    std::cout << doileaNumar << '\n';
  }
  return 0;
}
