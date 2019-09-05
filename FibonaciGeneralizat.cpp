#include<iostream>

using namespace std;

int main() {
  long long int primulNumar, doileaNumar, n, fibonaci = 0;
  cin>>primulNumar>>doileaNumar>>n;
  fibonaci = primulNumar + doileaNumar;
  cout<<primulNumar<<" "<<doileaNumar<<" ";
  while (abs(fibonaci) <= n) {
    cout<<fibonaci<<" ";
    primulNumar = doileaNumar;
    doileaNumar = fibonaci;
    fibonaci = primulNumar + doileaNumar;
  }
  return 0;
}
