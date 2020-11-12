#include<bits/stdc++.h>

using namespace std;

//ifstream fin("fazan.in");

char Cuvinte[102][21], cuvant[21], secventaCurenta[102][21], secventaMaxima[102][21];
int pozitiiSecventaCurenta[102], pozitiiSecventaMaxima[102], lungimeSecventaCurenta = 1, lungimeSecventaMaxima = 0, numarCuvinte = 0;

void validareSecventa( int lungimeCurenta ) {
    if ( lungimeCurenta > lungimeSecventaMaxima ) {
        lungimeSecventaMaxima = lungimeCurenta;
        for ( int i = 1; i<=lungimeCurenta; ++i ) {
            strcpy(secventaMaxima[i],secventaCurenta[i]);
            pozitiiSecventaMaxima[i] = pozitiiSecventaCurenta[i];
        }
    }
}

int fazan (char x[], char y[]) {
    if (x[strlen(x)-2] == y[0] && x[strlen(x)-1] == y[1]) return 1;
    return 0;
}

void back(int k, int lungimeSecventaCurenta) {
  int OK = 0;
  if ( k == numarCuvinte ) {
    validareSecventa(lungimeSecventaCurenta - 1);
  }

  for ( int i = k + 1; i<=numarCuvinte; ++i ) {
    if ( fazan(Cuvinte[k],Cuvinte[i]) ) {
        OK = 1;
        strcpy(secventaCurenta[lungimeSecventaCurenta],Cuvinte[i]);
        pozitiiSecventaCurenta[lungimeSecventaCurenta] = i;

        back(i,lungimeSecventaCurenta + 1);
    }

  }
  if (!OK)
    validareSecventa(lungimeSecventaCurenta-1);
}

int main() {
    while (cin >> cuvant) {
        strcpy(Cuvinte[++numarCuvinte],cuvant);
    }

    for ( int i = 1; i<=numarCuvinte; ++i ) {
        lungimeSecventaCurenta = 1;
        strcpy(secventaCurenta[lungimeSecventaCurenta], Cuvinte[i]);
        pozitiiSecventaCurenta[lungimeSecventaCurenta] = i;
        back(i,lungimeSecventaCurenta + 1);
    }


    for ( int i = 1; i<=numarCuvinte; ++i ) {
        if (pozitiiSecventaMaxima[i])
            cout << secventaMaxima[i] << "\n";
    }
    return 0;
}
