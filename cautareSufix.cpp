#include<iostream>
#include<string>

using namespace std;

int main() {
  char s1[103],s2[103];
  int n, contor = 0, nc1 = 0,nc2 = 0, pozS1, adevar = 0;
  cin>>n;
  cin.get();
  cin.getline(s1,102);
 for (int i = 0; s1[i]; ++i) {
    ++nc1;
  }

  for ( int i = 1; i<=n; ++i) {
    cin.getline(s2,102);
    nc2=0;
    for ( int j = 0; s2[j]; ++j ) {
      ++nc2;
    }
    pozS1 = nc1 - 1;
    for (int k = nc2-1; k>=nc2-nc1; --k) {
      //cout<<"k: "<<k<<"\n";
      if ( s2[k] == s1[pozS1] && !((s2[k-1] == '\0'))) {
        adevar = 1;
      } else {
        adevar = 0;
        break;
      }
      --pozS1;
    }
      if ( adevar ) {
        ++contor;
      }
    }
  cout<<contor;
  return 0;
}
