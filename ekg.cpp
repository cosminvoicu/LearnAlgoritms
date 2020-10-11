#include<iostream>

using namespace std;

int computeGCD(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main () {

  int n,ekg[1001],;
  cin>>n;

  return 0;
}
