#include<iostream>

using namespace std;

int main() {
  double sir[201], primulElement, ultimulElement,ultimul;
  int n,  countNumere = 0;

  cin>>n;
  for (int i = 1; i<=n; ++i) {
    cin>>sir[i];
    ultimul = sir[i];
  }
  double primul = sir[1];
  if (primul < ultimul) {
    primulElement = sir[1];
    ultimulElement = ultimul;
  } else {
     primulElement = ultimul;
     ultimulElement = sir[1];
  }
 //cout<<primulElement<<" "<<ultimul<<"\n";
  for ( int i = 2; i<n; ++i) {
    if ( sir[i] < primulElement || sir[i] > ultimulElement ) {
      ++countNumere;
    }
  }
  cout<<countNumere;
  return 0;
}
