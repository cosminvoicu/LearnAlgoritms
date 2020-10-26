#include<iostream>
#include<cstring>

using namespace std;

int sirFrecventa1[127] = {0}, sirFrecventa2[127] = {0};

int main() {
char cuvant[100002], cuvant1[100002];
int n, contor = 0;
cin >> n;
cin.get();
cin.getline(cuvant,100001);

for ( int i = 0; cuvant[i]; ++i ) ++sirFrecventa1[cuvant[i]];


for ( int i = 1; i<=n; ++i ) {
  bool anagrame = true;
  cin.getline(cuvant1,100001);

  for ( int j = 0; cuvant1[j]; ++j ) ++sirFrecventa2[cuvant1[j]];
  for ( char k = 'a'; k<='z'; ++k ) {
    if ( sirFrecventa1[k] != sirFrecventa2[k] ) {
      anagrame = false;
    }
    sirFrecventa2[k] = 0;
  }
  if ( anagrame ) {
    ++contor;
  }
}
  cout << contor;
  return 0;
}
