#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  int n;
  double v[101],procent,diferenta;
  cin>>n;
  for ( int i = 1; i<=n; ++i) {
    cin>>v[i];
  }
  if ( v[2]-v[1] > 0 ) {
    cout<<"Veniturile au crescut cu: ";
  } else if (v[2]-v[1] < 0 ) {
    cout<<"Veniturile au scazut cu: ";
  }
  for (int i = 2; i<=n; ++i) {
    if (v[i] - v[i-1] == 0) {
      cout<<"Veniturile au ramas la fel";
      break;
    }
    diferenta = v[i] - v[i-1];
    procent = (diferenta / v[i-1]) * 100;
    if (procent>100)
      cout<<">100%"<<' ';
    else if (procent>0) {
      cout<<fixed<<setprecision(3)<<procent<<"%"<<' ';
    } else if (procent<0) {
      cout<<fixed<<setprecision(3)<<procent*-1<<"%"<<' ';
    }
  }
  return 0;
}
