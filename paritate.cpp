/*
Cerinţa
Să se scrie un program care citeşte de la tastatură un număr natural şi verifică dacă numărul este par sau impar.

Date de intrare
Programul va citi de la tastatură un număr natural n.

Date de ieşire
Programul va afişa pe ecran mesajul n este par, dacă numărul citit n este par, respectiv mesajul n este impar în caz contrar.

Restricţii şi precizări
 n<1000000000
*/
#include <iostream>

using namespace std;

int main() {
  int numar;
  cin>>numar;

  if(numar%2 == 0) {
    cout<<numar<<" este par";
  } else {
    cout<<numar<<" este impar";
  }
  return 0;
}
