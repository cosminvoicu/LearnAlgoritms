#include<iostream>

using namespace std;

int main() {
  int n, contor = 0,i;
  cin>>n;

  for (i = 1; i*i <n; ++i) {
    if (n%i == 0) {

     int j = n / i;
     if ( i%2 == 0) { ++contor; };
      if (j%2 == 0) { ++contor; };
    }
  }
  if (((i*i) == n) && (i%2 == 0)) { ++ contor; }
  cout<<contor;
  return 0;
}
