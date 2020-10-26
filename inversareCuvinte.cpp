#include<iostream>
#include<cstring>

using namespace std;

int este_litera(char c)
{
    if(('a'<=c&&c<='z')||('A'<=c&&c<='Z'))
        return 1;
    return 0;
}


int main() {
  char linie[2002];
  int contor = 0;

  while (cin.getline(linie,2001)) {
      int lungimeSir = strlen(linie);
      for ( int i = 0; i<=lungimeSir; ++i ) {

        if (este_litera(linie[i])) ++contor;
        else {

          int mijocCuvant = contor / 2;
          if ( contor % 2 == 0 ) {
            for ( int j = i - contor; j<mijocCuvant+(i - contor); ++j ) {
              char ch = linie[j];
              linie[j] = linie[mijocCuvant+j];
              linie[mijocCuvant+j] = ch;
            }
            contor = 0;
          } else {
            for ( int j = i - contor; j<mijocCuvant+(i - contor); ++j ) {
              char ch = linie[j];
              linie[j] = linie[mijocCuvant+j+1];
              linie[mijocCuvant+j+1] = ch;
            }
            contor = 0;
          }
        }

      }
      cout << linie << "\n";

  }
return 0;
}
