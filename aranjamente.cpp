#include<iostream>

using namespace std;

int n, k, sir[10], sirFrecventa[10];

void afisare () {
  for ( int i = 1; i<=k; ++i ) {
    cout << sir[i];
  }
  cout << "\n";
}

void back(int pas) {
  for ( int i = 1; i<=n; ++i ) {
    if ( !sirFrecventa[i] ) {
      sir[pas] = i;
      sirFrecventa[i] = 1;
      if ( pas < k ) {
        back(pas+1);
      } else
          afisare();
      sirFrecventa[i] = 0;    
    }
  }
}

int main() {
  cin >> n >> k;
  back(1);

  return 0;
}
