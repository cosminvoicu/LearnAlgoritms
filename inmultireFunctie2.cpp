#include<iostream>

using namespace std;

void inmulteste(int a[], int  b[], int  rezultat[])
/* C <- A x B */
{ int i,j,T=0;

rezultat[0]=a[0]+b[0]-1;
for (i=1;i<=a[0]+b[0];) rezultat[i++]=0;
for (i=1;i<=a[0];i++)
  for (j=1;j<=b[0];j++)
    rezultat[i+j-1]+=a[i]*b[j];
for (i=1;i<=rezultat[0];i++)
  { T=(rezultat[i]+=T)/10;
    rezultat[i]%=10;
  }
if (T) rezultat[++rezultat[0]]=T;
}

int main() {
  int a[1001] = {5, 1, 2, 2, 5, 8} ,b[1001] = {2, 1, 2},rezultat[1001];
  inmulteste(a,b,rezultat);
  for ( int i = 0; i<= rezultat[0]; ++i) {
    cout<<rezultat[i]<<' ';
  }
  return 0;
}
