#include<iostream>

using namespace std;

int cifraPara ( int x) {
  if ( x%2 == 0)
    return x;
  else
    return 1000000001;
}
int cifraMinPara( int n ) {
  if(n < 10 )
    if (n%2 == 0) return n;
    else return 1000000001;

    if ( (n%10) % 2 == 0 ) return min(n%10,cifraMinPara(n/10));
    else return cifraMinPara(n/10);

}

int main() {
  int n;
  cin>>n;
  int x = cifraMinPara(n);
  cout<<x;
  return 0;
}
