#include<iostream>
#include<fstream>

using namespace std;

int main() {

  ifstream in ("donatii.in");
  int x;
  while( in >> x) {
    cout<<x<<' ';
  }

}
