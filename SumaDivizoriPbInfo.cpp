#include<iostream>

using namespace std;

int main() {
  int n, sumaDivizori = 0, j;
  cin>>n;

  for (int i = 1; i*i <= n; ++i) {
    if ( n % i == 0) {
      j = n/i;
      if (j == i) {
        sumaDivizori += i;
      } else {
        sumaDivizori = sumaDivizori + i + j;
      }
    }

  }
  cout<<sumaDivizori;
  return 0;
}
