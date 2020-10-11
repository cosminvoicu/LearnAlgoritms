#include<iostream>

using namespace std;

int main() {
  int sir[1001], n, suma = 0, indicePrimulPar = -1, indiceDoileaPar = -1;
  cin>>n;

  for (int i = 1; i<=n; ++i) {
    cin>>sir[i];
    if (sir[i] % 2 == 0 && indicePrimulPar == -1 ) {
      indicePrimulPar = i;
    } else if (sir[i] % 2 == 0) {
        indiceDoileaPar = i;
    }
  }

  if (indicePrimulPar != -1 && indiceDoileaPar != -1) {
    for ( int i = indicePrimulPar; i<=indiceDoileaPar; ++i) {
      suma += sir[i];
    }
    cout<<suma;
  } else  {
    cout<<"NU EXISTA";
  }


  return 0;
}
