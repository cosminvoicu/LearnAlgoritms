#include<iostream>

using namespace std;

int main() {
  int numar, produs, copieNumar;

  cin>>numar;

  while (numar/10) {
    copieNumar = numar;
    produs = 1;
    while (copieNumar) {
      produs*=(copieNumar%10);
      copieNumar/=10;
    }
    numar = produs;
  }
  cout<<numar;
}
