#include<iostream>
//#include<fstream>

using namespace std;

//ifstream f("clase.in");
//ofstream g("clase.out");

int main() {
  int n, m, elevi[10000], carti[10000], clase = 0, frecventa[1001];
  cin>>n;
  for (int i = 1; i <= n; ++i) {
    cin>>elevi[i];
  }
  cin>>m;
  for ( int j = 1; j <= m; ++j) {
    cin>>carti[j];
  }

  int stanga, dreapta, mijloc;

for (int k = 1; k <= m; ++k) {
  int x = carti[k];
  stanga = 1;
  dreapta = n;
  while (stanga < dreapta) {
    mijloc = (stanga + dreapta) / 2;
    if (x > elevi[mijloc]) {
      stanga = mijloc + 1;
    } else {
      dreapta = mijloc;
    }
  }
  if (elevi[stanga] == x) {
    if(frecventa[x] == 0) {
      ++frecventa[x];
      ++clase;
    }
  }
}
cout<<clase<<"\n";

  return 0;
}
