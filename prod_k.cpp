#include<iostream>
using namespace std;

int main() {
  long long int n, k, produs = 1, avemK = 0;
  cin>>n>>k;

  while (n) {
    int lastDigit = n%10;
    if ( lastDigit != k) {
      produs *= lastDigit;
      avemK = 1;
    }
    n /= 10;
  }
  if (avemK == 0) {
    cout<<0;
  } else {
    cout<<produs;
  }
  return 0;
}
