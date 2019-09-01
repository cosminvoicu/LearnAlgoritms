#include<iostream>
#include<fstream>

using namespace std;

int main() {

  ifstream f("exemplu.txt");
	
  
  int n;
  int v;
  int fuel_price;

  f>>n>>v;
  
  fuel_price = 0;
  n = n-1;
  if(v == n)
  fuel_price = v;

  if(v < n -1) {

  do {
    n = (n) - v;
    fuel_price += v;

  }   while(n>=0);
}
  cout<<fuel_price<<"\n";

  return 0;
}

	
