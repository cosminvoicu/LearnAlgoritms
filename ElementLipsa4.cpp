#include<iostream>

using namespace std;

int main() {

    int primulSir[1202], doileaSir[1202], n,m, gasit = 0;

    cin>>n>>m;
    for(int i = 1; i<=n; ++i) {
      cin>>primulSir[i];
    }
    for(int i=1; i<=n-m; ++i) {
      cin>>doileaSir[i];
    }

    if(m==0) {
      cout<<"Nu s-au pierdut date";
    } else {
      for ( int i = 1; i<=n-m; ++i) {
        for ( int j = 1; j<=n; ++j) {
          if ( doileaSir[i] == primulSir[j] ) {
            primulSir[j] = 100001;
            break;
          }
        }
      }
      for ( int i = 1; i<=n; ++i)
        if ( primulSir[i] != 100001 )
          cout<<primulSir[i]<<' ';
  }
    return 0;
}
