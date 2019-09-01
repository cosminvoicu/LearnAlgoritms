#include<iostream>

using namespace std;

int main() {
  /*
n  timbre -> timbrele au un numar de ordine de la 0 la n
ofera k timbre
timbre de multiplu p
  */
  int n,k,p,cauta = 1;
  cin>>n>>k>>p;

  for(int i = k; i>0; --i) {
    cauta = 1;
    while (cauta) {
      if(n%p == 0) {
        std::cout <<n<< " ";
        cauta = 0;
      }
      --n;
    }
  }
  return 0;
}
