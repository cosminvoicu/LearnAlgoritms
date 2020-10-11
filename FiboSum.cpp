#include<iostream>

using namespace std;

int main() {
  int n, a, b, c;
  cin>>n;

  while (n>0) {
    a = 0;
    b = 1;
    while ( a+b <= n ) {
      c = a + b;
      a = b;
      b = c;
    }
    cout<<c<<" ";
    n -= c;
  }
  return 0;
}
