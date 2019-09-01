#include<iostream>

using namespace std;

int main() {
  //declarare variabile
  int nNatural=0, primulNumar = 1, doileaNumar = 1, nNumar;

  //citim numarul natural de la tastatura;
  cin>>nNatural;

  //daca numarul natural este egal cu 1 sau 2 afisam.
  if (nNatural == 1) {
     std::cout << 1;
     return 0;
  } else if(nNatural == 2) {
    std::cout << 1;
    return 0;
  }
  //creem numarul lui fibonacci
  while (nNatural > 2) {
      nNumar = primulNumar + doileaNumar;
      primulNumar = doileaNumar;
      doileaNumar = nNumar;
      --nNatural;
    }

  std::cout << nNumar;
  return 0;
}
