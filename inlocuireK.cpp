#include<iostream>
#include<math.h>

using namespace std;

int main() {
  int sir[202], k, n;

  cin>>k>>n;

  for ( int i = 1; i<=n; ++i )
    cin>>sir[i];

  for ( int i = 1; i<=n; ++i )  {

    int inferior = sir[i] / k;
    int superior = inferior + 1;

    cout<<sir[i] - inferior * k<<' '<<superior * k - sir[i]<<"\n";
    if ( sir[i] - inferior * k <= superior * k - sir[i] )
      sir[i] = inferior * k;
    else
      sir[i] = superior * k;

  }

/*  for ( int i = n; i>=1; --i ) {
    cout<<sir[i]<<' ';
  }*/

  for ( int i = 1; i<=n; ++i ) 
      cout<<sir[i]<<' ';
  return 0;
}
