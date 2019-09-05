#include<iostream>

using namespace std;

int main() {
  int n, nMinim=999999999, numar;

  cin>>n;
  for (int i = 1; i <= n; ++i) {
    cin>>numar;
    if (numar<nMinim) {
      nMinim = numar;
    }
  }
  std::cout << nMinim;
  return 0;
}
