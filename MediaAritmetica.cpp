#include<iostream>
#include<iomanip>

using namespace std;

int main() {
  double a, b, c, medieAritmetica;
  cin>>a>>b>>c;
  medieAritmetica = (a+b+c)/3;
  cout << fixed;
  cout << setprecision(2) << medieAritmetica ;
  return 0;
}
