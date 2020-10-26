#include<iostream>
#include<math.h>

using namespace std;

int vectorFrecventa[1001];

int gdc ( int a, int b) {
  if (!b)
    return a;
  return gdc(b, a%b);
}

int main() {

 int sirEKG[1001], contor = 2, minim = 3;
 int n;
 cin>>n;
 sirEKG[1] = 1;
 ++vectorFrecventa[sirEKG[1]];
 sirEKG[2] = 2;
 ++vectorFrecventa[sirEKG[2]];

 while ( contor <= n-1 )

 for ( int i = minim; i<=10001; ++i ) {

   if (gdc(sirEKG[contor],i) != 1 && vectorFrecventa[i] == 0) {
     sirEKG[++contor] = i;
     ++vectorFrecventa[sirEKG[contor]];
     break;
   }
   if (vectorFrecventa[i] == 0)
      if (vectorFrecventa[minim] != 0) {
        minim = i;
      }
      minim = min(minim,i);
 }

  cout<<sirEKG[n];
  return 0;
}
