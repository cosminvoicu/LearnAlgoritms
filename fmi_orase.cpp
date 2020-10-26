//#include<iostream>
#include<fstream>

using namespace std;

ifstream fin("fmi_orase1.in");
ofstream fout("fmi_orase1.out");

int main() {
  int sir[101],n, maxCapacitate = 0, produs = 1;
  fin>>n;
  for ( int i = 1;i<=n; ++i ) {
    fin>>sir[i];
  }
  fin.close();
  //cout<<pozImax;
  for (int i = 1; i<n; ++i) {
    for ( int j = i + 1; j<= n; ++j ) {
      if ( sir[i] <= sir[j] ) {
        produs = sir[i] * (j-i);
      } else {
        produs = sir[j] * (j - i);
      }
      if ( produs > maxCapacitate ) {
        maxCapacitate = produs;
      }
    }
  }
  fout<<maxCapacitate;
  fout.close();
  return 0;
}
