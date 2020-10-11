#include<iostream>

using namespace std;
int main() {
long int n, S=0,i;
  cin >> n;
  for (i=1; i<=n; ++i)
      if (i%2) S+=i * (i+1);
      else S = S - i * (i+1);
  cout << "Rezultatul este " << S << endl;
}
