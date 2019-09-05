#include<iostream>

using namespace std;

int main() {
long long int n, produsImpare = 1, impar = 0;
cin>>n;

while (n) {
  int variabila = n%10;
  if(variabila%2 == 1) {
    produsImpare *= variabila;
      impar = 1;
  }
  n /= 10;
}
if (impar == 0) {
  cout<<"-1";
} else {
  cout<<produsImpare;
}
return 0;
}
