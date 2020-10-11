#include<iostream>

using namespace std;

long long rez = 0;
long long impletireNr(int a, int b) {

  if (a == 0)
    return 0;
  impletireNr(a/10,b/10);
  rez = (rez*100) + (a%10)*10 + b%10;
  return rez;
}

int main() {
  long long rez = impletireNr(123,456);
  cout<<rez;
  return 0;
}
