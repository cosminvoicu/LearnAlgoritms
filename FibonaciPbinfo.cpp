#include<iostream>

using namespace std;
/*
Se consideră şirul Fibonacci, definit astfel:  f1=1 ,  f2=1 ,  fn=fn-1+fn-2 , dacă n>2.
Cerinta:
Se dă un număr natural n. Să se afişeze în ordine crescătoare, primii n termeni ai şirului lui Fibonacci.
*/
int main() {
  //declarare variabile
  int nNatural=0, primulNumar = 1, doileaNumar = 1, nNumar;

  //citim numarul natural de la tastatura;
  cin>>nNatural;
  if (nNatural == 1) {
    std::cout << "1";
  }
  if (nNatural == 2) {
    std::cout << 1 <<" "<< 1;
  }
  //daca numarul natural este egal cu 1 sau 2 afisam.
  if (nNatural > 2) {
     std::cout << 1 <<" "<< 1 << " ";
  }
  //creem numarul lui fibonacci
  while (nNatural > 2) {
      nNumar = primulNumar + doileaNumar;
      primulNumar = doileaNumar;
      doileaNumar = nNumar;
      --nNatural;
      std::cout << nNumar << " ";
    }
  return 0;
}
