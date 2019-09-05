#include<iostream>
#include<fstream>
using namespace std;
ifstream f("produsmaxim.in");
ofstream g("produsmaxim.out");
int main() {
  /*
Pentru a obtine un produs maxim observam ca cele 3 cifre trebuie sa fie apropriate ca valoare, diferenta
dintre oricare 2 sa fie mai mare ca 1.
Restul impartiri unui numar la 3 poate fi 0, 1 sau 2. Daca restul este diferit de 0 vom distribui diferenta catre b, si c
pentru ca diferenta ditre cifresa fie crescatoare.

  */
  int n, a, b, c, maxProdus = 0;
  while (f>>n) {
    int rest = n % 3;
    a = b = c = n / 3;
    if (rest > 0) {
      ++c;
      --rest;
    }
    if (rest > 0) {
      ++b;
      --rest;
    }
    g<<n<<" "<<a<<" "<<b<<" "<<c<<"\n";
  }

  return 0;
}
