#include<iostream>


using namespace std;

int main() {

  int n;
  int v;
  int fuel_price;

  cin>>n>>v;

  fuel_price = 0;
  n = n-1;
  if(v == n)
  {
    fuel_price = v;
    return 0;
}

  do {
    n = n - v;
    fuel_price = fuel_price + v;

  }   while(n>=0);

  cout<<fuel_price<<"\n";

  return 0;
}
