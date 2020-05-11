/*
Cerința
Se dau 5 numere distincte. Să se determine suma celor mai mari 3 dintre ele.

Date de intrare
Programul citește de la tastatură 5 numere naturale.

Date de ieșire
Programul va afișa pe ecran numărul cerut.

Restricții și precizări
cele 5 numere naturale sunt distincte, cuprinse între 1 și 10000, inclusiv
Intrare

1 5 2 3 100
Ieșire

108
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
int a , b, c, d, e, suma = 0, minim;
cin>>a>>b>>c>>d>>e;
suma = a+b+c+d+e;

minim = a;

if ( b<minim ) {
  minim = b;
}

if( c<minim ){
  minim = c;
}

if( d<minim ) {
  minim = d;
}

if( e < minim) {
  minim = e;
}

suma -= minim;

if( a == minim )
a = 10001;
if ( b == minim )
b = 10001;
if ( c == minim )
c = 10001;
if( d == minim )
d = 10001;
if ( e == minim )
e = 10001;

minim = a;
if( b<minim ) {
  minim = b;
}
if ( c<minim ) {
minim = c;
}
if ( d<minim ) {
  minim = d;
}
if ( e < minim ) {
  minim = e;
}

suma -= minim;
//afisare suma
cout<<suma;
  return 0;
}
