#include<iostream>

using namespace std;

int main() {
  //declaram variabile
  long long int array[1000000];
  int numar, copieNumar, numarCifre = 0, iterator = 1, variabila;

  //citim numar de la tastatura
  cin>>numar;
  copieNumar = numar;

//punem numarul citit intr-un array
  while (copieNumar) {
    array[iterator] = copieNumar%10;
    copieNumar/=10;
    ++numarCifre;
    ++iterator;
  }

//facem swap intre array[2] si array[n-1]
  variabila = array[2];
  array[2] = array[numarCifre-1];
  array[numarCifre-1] = variabila;

//afisam numarul dupa
  for(iterator = numarCifre; iterator>0; --iterator) {
    cout<<array[iterator];
  }
  return 0;
}
