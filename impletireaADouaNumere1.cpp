#include<iostream>

using namespace std;

void impletireNr(int a, int b, long long &rez) {
  if (a == 0)
    return;
  impletireNr(a/10,b/10,rez);
  rez = (rez*100)+(a%10)*10+(b%10);
}

int main() {
  long long rez = 0;
  impletireNr(333, 444, rez);
  cout<<rez;
  return 0;
}
