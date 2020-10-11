#include<iostream>

using namespace std;

void inmulteste(int a[], int x, int rezultat[]) {
  long long int inmultit=0;
  int n=a[0], contor=0;
  for (int i = 1; i<=n; ++i) {
    inmultit += (x*a[i]);
    rezultat[i] = inmultit%10;
    inmultit /= 10;
    if ( i == n && inmultit ) {
      contor = n + 1;
      while (inmultit) {
        rezultat[contor] = inmultit%10;
        inmultit/=10;
        if (inmultit)
          ++contor;
      }
    }
  }
  if ( contor > n )
    n = contor;
  rezultat[0] = n;
}

int main() {
  int a[1001] = {9,9,9,9,9,9,9,9,9,9} , x = 1, rezultat[1001];
  inmulteste(a,x,rezultat);
  for ( int i = 0; i<=rezultat[0]; ++i) {
    cout<<rezultat[i]<<' ';
  }
  return 0;
}
