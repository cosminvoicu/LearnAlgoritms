#include<iostream>

using namespace std;
/*
Se consideră şirul Fibonacci, definit astfel:  f1=1 ,  f2=1 ,  fn=fn-1+fn-2 , dacă n>2.
Cerinta:
Se dă un număr natural n. Să se afişeze în ordine crescătoare, termenii şirului lui Fibonacci mai mici sau egali cu n.
*/
int main() {
  //declarare variabile
  int nNatural=0, primulNumar = 1, doileaNumar = 1, nNumar = 1;

  //citim numarul natural de la tastatura;
  cin>>nNatural;
  if (nNatural == 1) {
    std::cout << "1"<<" ";
  } else if (nNatural == 2) {
    std::cout << 1 <<" ";
} else {
    std::cout << 1 <<" ";
}
  //creem numarul lui fibonacci
  while (nNumar <= nNatural) {
      std::cout << nNumar << " ";
      primulNumar = doileaNumar;
      doileaNumar = nNumar;
      nNumar = primulNumar + doileaNumar;


    }
  return 0;
}
