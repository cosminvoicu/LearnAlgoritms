#include<iostream>
#include<iomanip>
#include <string.h>

using namespace std;

struct Elev {
    double medie;
    char nume[21];
};

void sortare(int n, Elev elevi[30]) {
    Elev aux;
    for (int i = 0; i<n-1; ++i) {
        for ( int j = i+1; j<n; ++j) {
            if ( elevi[i].medie == elevi[j].medie ) {
                if ( strcmp(elevi[i].nume, elevi[j].nume) > 0 ) {
                    aux = elevi[i];
                    elevi[i] = elevi[j];
                    elevi[j] = aux;
                }
            } else if (elevi[i].medie>elevi[j].medie) {
                    aux = elevi[i];
                    elevi[i] = elevi[j];
                    elevi[j] = aux;
            }
        }
    }
}

int main() {
  int n = 4;
  Elev elevi[30] = {{5.00,"Popescu Ioana"},{5.00,"Popescu Dani"},{8.79,"Cristescu Aurel"},{6.98,"Cristescu Ioan"}};


  sortare(n,elevi);
  for ( int i = 0; i<n;++i) {
    cout<<fixed<<setprecision(2)<<elevi[i].medie<<' '<<elevi[i].nume<<"\n";
  }
  return 0;
}
