#include<iostream>

using namespace std;

int maxCons0 (long long int N) {
  int maximCifreZero = 0, contor = 0;
  while (N) {
    if (N%10 == 0)
      ++contor;
    else {
      if (contor>maximCifreZero)
        maximCifreZero = contor;
      contor = 0;
    }
    N/=10;
  }
  if (contor>maximCifreZero)
    maximCifreZero = contor;

  return maximCifreZero;
}

int main() {
  cout<<maxCons0(1080035);
  return 0;
}
