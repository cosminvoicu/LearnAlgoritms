#include<iostream>

using namespace std;

int sirI[11], sirJ[11],n,l,c,matrice[11][11], sirFrecventaI[11], sirFrecventaJ[11],poz;



void back(int l, int c,int poz) {

  //cout << sirFrecventaI[l] << sirFrecventaJ[c];
  if (!sirFrecventaI[l] || !sirFrecventaJ[c] ) {
    sirFrecventaI[l] = sirFrecventaJ[c] = 1;
    sirI[poz] = l;
    //cout << sirI[poz];
    sirJ[poz] = c;
    //cout << sirJ[poz];

    if ( !(l == n) && !(matrice[l+1][c-1] == 0 && matrice[l+1][c] == 1 && matrice[l+1][c+1]== 0)) {
    //cout << "aici";
    if ( matrice[l+1][c-1] == 1) {
      //cout << "aici";
      back(l+1,c-1,poz+1);
    }
    if ( matrice[l+1][c] == 0) {
      //cout << "aici";
      back(l+1,c,poz+1);
    }
    if ( matrice[l+1][c+1] == 1 ) {
      //cout << "aici";
      back(l+1,c+1,poz+1);
   }
  } else {
    for ( int i = 1; i<= poz; ++i ) {
      cout << sirI[i] << ' ' << sirJ[i] << ' ';
    }
    cout << "\n";
  }

    sirFrecventaI[l] = sirFrecventaJ[c] = 0;
  }

}


int main() {
  cin >> n;
  for ( int i = 1; i<=n; ++i ) {
    for ( int j = 1; j<=n; ++j ) {
      cin >> matrice[i][j];
    }
  }
  cin >> l >> c;

  back(l,c,1);


  return 0;
}
