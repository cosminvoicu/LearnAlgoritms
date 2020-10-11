#include<iostream>
#include<algorithm>

using namespace std;

int main() {
  int v[10],vv[10],n, adevar = 1;
  cin>>n;
  for (int i = 1; i<=n; ++i) {
    cin>>v[i];
    vv[i] = v[i];
  }
do {
  for (int i = 1; i<=n; ++i)
    cout<<v[i]<<' ';
  next_permutation(v + 1 , v + 1 + n);
  for ( int i = 1; i<=n; ++i) {
    if (v[i] == vv[i]) {
      adevar = 1;
    } else {
      adevar = 0;
      break;
    }
  }
  cout<<"\n";
} while (adevar == 0);


  return 0;
}
