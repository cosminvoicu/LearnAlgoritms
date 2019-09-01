#include<iostream>

using namespace std;

int main() {
  int N, primulNumar, doileaNumar, crescator = 0, descrescator = 0;

  cin>>N;
  if(N<3) {
    cout<<0;
    return 0;
  }

  // introdu primul numar care va fi atribui celui de al doileaNumar
  cin>>doileaNumar;
  primulNumar = doileaNumar;

  //citeste toate numerele comparandule astfel incat sa fie sir munte
  while(N>1) {
    std::cin >> doileaNumar;
    //daca sirul este strict crescator var crescator va fi true
    if (primulNumar < doileaNumar) {
      if(descrescator == 0) {
        crescator = 1;
      } else {
        crescator = 0;
      }
    } else if (primulNumar == doileaNumar) { // daca avem egalitati nu mai sunt strict crescator/descrescator
      std::cout << 0;
      return 0;
    }
    // daca sirul este descrescator variabila descrescator va fi true
    if(primulNumar > doileaNumar) {
      if(crescator == 1) {
        descrescator = 1;
      } else {
        descrescator = 0;
      }
    }
    //cout<<N<<" N numarul"<<"\n";
    primulNumar = doileaNumar;
    --N;
  }

// crescator si descrescator true va afisa 1 altfel 0
  if(crescator && descrescator) {
    std::cout << 1;
  } else {
    cout << 0;
  }
  return 0;
}
