#include<iostream>

using namespace std;

int  copyPrumulSir[50001];
void rightRotate(int arr[], int n, int k) {
  int dif = n - k;
  for (int i = 0; i < n; i++) {
      copyPrumulSir[i] = (arr[(dif + i) % n]);
    }
}

int main() {
  int primulSir[50001], doileSir[10001],n,k, min = 1000000001, minI, nrPermutari;
  cin>>n;
  for (int i = 0; i<n; ++i) {
    cin>>primulSir[i];
    if (primulSir[i]<min) {
      min = primulSir[i];
      minI =i;
    }
  }
  cin>>k;
  for (int j = 0; j<k; ++j) {
    cin>>doileSir[j];
  }

  nrPermutari = n - minI;
  rightRotate(primulSir,n,nrPermutari);

  for ( int i = 0; i<k; ++i) {
    int stanga = 0, dreapta = n - 1, m, x = doileSir[i];

    while ( stanga < dreapta ) {
      m = (stanga + dreapta) / 2;
      if (x > copyPrumulSir[m]) {
        stanga = m + 1;
      } else {
        dreapta = m;
      }
    }
    if ( copyPrumulSir[stanga] == x ) {
      cout<<x<<" se gaseste in sir"<<"\n";
    } else {
      cout<<x<<" nu se gaseste in sir"<<"\n";
    }
  }

  return 0;
}
