
/*a[] = {5, 1, 2, 2, 5, 8} ; x = 6
În urma apelului funcției int rest = imparte(a, x, rezultat), șirul rezultat[] devine:

rezultat[] = {5, 3, 0, 2, 4, 1}
iar valoarea variabilei rest este 3*/
#include<iostream>

using namespace std;

int imparte(int a[], int x, int rezultat[])
/* A <- A/X si intoarce A%X */
{ int i;
  int R=0;

  for (i=a[0];i;i--)
    { a[i]=(R=10*R+a[i])/x;
      R%=x;
    }
  while (!a[a[0]] && a[0]>1) a[0]--;
  for ( int i = 0; i<= a[0]; ++i) {
    rezultat[i] = a[i];
  }

  return R;
}

int main() {
  int a[1001] = {5, 1, 2, 2, 5, 8} , x = 6, rezultat[1001];
  cout<<imparte(a,x,rezultat)<<"\n";
  for ( int i = 0; i<=5; ++i) {
    cout<<rezultat[i]<<' ';
  }
  return 0;
}
