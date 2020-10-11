#include<iostream>

using namespace std;

int main() {
    int primulSir[10001], doileSir[101], m, n;

    cin>>n;
    for(int i = 1; i<=n; ++i) {
      cin>>primulSir[i];
    }
    cin>>m;
    for(int i = 1; i<=m; ++i) {
      cin>>doileSir[i];
    }

    for(int i = 1; i<=m; ++i) {
      for(int j = 1; j<=n; ++j) {
        if(primulSir[j] == doileSir[i]) {
          cout<<j<<' ';
          break;
        }
      }
    }
    return 0;
}
