#include<iostream>

using namespace std;

int main() {
  long long int n, nMin = 999999999, nMax = 0, numar;
  cin>>n;

  for (int i = 1; i <= n; ++i) {
    cin>>numar;
    if (numar > nMax) {
      nMax = numar;
    }
    if (numar < nMin) {
      nMin = numar;
    }
  }
  cout<<nMax+nMin;
  return 0;
}
