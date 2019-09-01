#include<iostream>

using namespace std;

int main() {
  /*
k, reprezentând numărul ai cărui multipli îi căutăm
numărul natural a, reprezentând numărul primei case de pe o stradă dată
numărul natural b, reprezentând numărul ultimei case de pe aceeași stradă.
  */
  int k,a,b;

  cin>>k>>a>>b;
  for(int i = a; i <= b; ++i) {
    if (i%k == 0) {
      cout<< i <<" ";
    }
  }
  return 0;
}
