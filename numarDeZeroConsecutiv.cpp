#include<iostream>

using namespace std;

int zeroCons(int N, int v[1000001]) {
    int zeroConsMax = - 1000001, contor = 0;
    for (int i = 0; i<N; ++i) {
      if (v[i] == 0) {
        ++contor;
      } else {
        if (contor>zeroConsMax)
          zeroConsMax = contor;
        contor = 0;
      }
    }
    if ( contor>zeroConsMax )
      zeroConsMax = contor;

    return zeroConsMax;
  }

int main() {
  int N = 3, v[1000000];
v[0] = 0;
v[1] = 0;
v[2] = 1;
cout << zeroCons(N, v);  // va afisa 2
return 0;
}
