#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int n, numar;
  cin>>n;

  for (int i = 1; i <= n; ++i) {
    cin>>numar;
    if((sqrt(5 * (numar * numar) - 4) == (int)(sqrt(5 * (numar * numar) - 4))) || (sqrt(5 * (numar * numar) + 4) == (int)(sqrt(5 * (numar * numar) + 4)))) {
      cout<<"DA"<<"\n";
    } else {
      cout<<"NU"<<"\n";
    }
  }
  return 0;
}
