#include<iostream>

using namespace std;

int main() {
  int m, n, MAX = -1,CNT = 0,x;
  bool done = false;
  cin>>m>>n;

  for ( int i = 1; i<=m; ++i) {
    done = false;
    for ( int j = 1; j<=n; ++j) {
      cin>>x;
      if ( x > MAX ) {
        MAX = x;
        CNT = 1;
      } else if ( x == MAX && done == false ) {
        done = true;
        ++CNT;
      }
    }
  }

  cout<<MAX<<' '<<CNT;
  return 0;
}
