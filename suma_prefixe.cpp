#include<iostream>

using namespace std;

int main() {
  int n, suma=0;

  cin>>n;
  while(n) {
    suma+=n;
    n/=10;
  }
  cout<<suma;
  return 0;
}
