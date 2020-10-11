#include<iostream>

using namespace std;

int main() {
  int sumaN,n,sumaCitire=0,x;
  cin>>n;
  sumaN = n*(n+1)/2;
  for ( int i = 1; i<n; ++i) {
    cin>>x;
    sumaCitire+=x;
  }
  cout<<sumaN-sumaCitire;
  return 0;
}
