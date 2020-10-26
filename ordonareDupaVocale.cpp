#include<iostream>
#include<cstring>

using namespace std;

int nrVocale ( char cuvant[] ) {
  int contor = 0;
  for ( int i = 0; cuvant[i]; ++i ) {
    if (strchr("AEIOUaeiou",cuvant[i])) ++contor;
  }
  return contor;
}

void interschimba( char a[], char b[] ) {
  char aux[22];
  strcpy(aux,a);
  strcpy(a,b);
  strcpy(b,aux);
}
int cmp(char a[], char b[]) //criteriul dupa care vrei sa sortezi, adica lexicografic dupa cuvant
{
    if(strcmp(a, b) > 0)
              return 1;
   return 0;
}

void ordonare(char linie[][22], int n ) {
  for ( int i = 1; i<n; ++i ) {
    for ( int j = i + 1; j<=n; j++) {
      if ( nrVocale(linie[i]) > nrVocale(linie[j]) || nrVocale(linie[i]) == nrVocale(linie[j]) && cmp(linie[i],linie[j])) {
        interschimba(linie[i], linie[j]);
      }
    }
  }
}

int main() {
  char linie[101],cuvant[101][22] ,sep[]=" ";
  int n = 0;

    while (cin.getline(linie,100)) {
      char * p = strtok(linie , sep);
      while ( p != NULL ) {
        strcpy(cuvant[++n], p);
        p = strtok(NULL, sep);
      }
    }
  ordonare(cuvant,n);

  for ( int i = 1; i<=n; ++i) {
    cout << cuvant[i] << "\n";
  }
  return 0;
}
