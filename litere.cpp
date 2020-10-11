#include<iostream>

using namespace std;

int main() {
  char c;
  int contor = 0;
  while (cin >> c) {
    if ( c != ' ' )
    ++contor;
  }
  cout<<contor;
  return 0;
}
