#include<iostream>

using namespace std;

int main() {
  int n, numar, baza = 0;
  cin>>n;

  for (int i = 1; i <= n; ++i) {
    cin>>numar;
    while (numar) {
      if ((numar%10) > baza) {
        baza = numar%10;
      }
      numar /= 10;
    }
  }
  cout<<baza+1;
  return 0;
}
