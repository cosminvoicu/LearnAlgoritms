#include<iostream>

using namespace std;

void romb(int jumatateInaltime, int inaltime,int parteStanga, int parteDreapta) {
  if ( jumatateInaltime==0)
    return;
for ( int i = 1; i<=inaltime; ++i) {
  if (i == parteStanga + 1) {
    cout<<"/";
  } else if ( i == inaltime - parteDreapta) {
    cout<<"\\";
  } else {
    cout<<' ';
  }
}
cout<<"\n";

romb(jumatateInaltime-1,inaltime,parteStanga-1,parteDreapta-1);

for ( int i = 1; i<=inaltime; ++i) {
  if (i == parteStanga + 1) {
    cout<<"\\";
  } else if ( i == inaltime - parteDreapta) {
    cout<<"/";
  } else {
    cout<<' ';
  }
}
cout<<"\n";
}

int main() {
  int n,jumatateInaltime,parteStanga,parteDreapta;
  cin>>n;
  jumatateInaltime = n/2;
  parteStanga = jumatateInaltime -1;
  parteDreapta = jumatateInaltime -1;
  romb(jumatateInaltime,n,parteStanga,parteDreapta);
  return 0;
}
