#include<iostream>

using namespace std;

int main() {
    int primulSir[10001], doileSir[101], n, m;
    cin>>n;
    for (int i = 1; i<=n; ++i) {
      cin>>primulSir[i];
    }
    cin>>m;
    for (int i = 1; i<=m; ++i) {
      cin>>doileSir[i];
    }
    for (int i = 1; i<=m; ++i) {
      for (int j = n; j>0; --j) {
        if(doileSir[i] == primulSir[j]) {
          cout<<j<<' ';
          break;
        }
      }
    }
    return 0;
}
