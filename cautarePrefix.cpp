#include<iostream>
#include<string>

using namespace std;

int main() {
  int n, contor = 0,p, adevarat = 0, varNum = 0;
  char s1[102], s2[102], c[102];

  cin>>n;
  cin.getline(c,101);
  cin.getline(s1,101);
  for (int p = 0; s1[p]; ++p) {
    ++varNum;
  }

  for ( int k = 1; k<=n; ++k ) {
    cin.getline(s2,101);
    for ( int i = 0; s1[i]; ++i ) {
        if (s1[i] == s2[i] && !(s2[varNum] == '\0')) {
          adevarat = 1;
        } else {
          adevarat = 0;
          break;
        }
      }
        if ( adevarat ) {
          ++contor;
        }
      }
  cout<<contor;
  return 0;
}
