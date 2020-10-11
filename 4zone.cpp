#include<iostream>

using namespace std;

int main() {
  int v[101][101],n;
  cin>>n;

  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=n; ++j) {
      cin>>v[i][j];
    }
  }
  // zona 1
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=n; ++j) {
      if (j>i && j<n+1-i) {
        cout<<v[i][j]<<' ';
      }
    }
  }
  cout<<"\n";
  //zone 2
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=n; ++j) {
      if (j<i && j<n+1-i) {
        cout<<v[i][j]<<' ';
      }
    }
  }
  cout<<"\n";
  //zona 3
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=n; ++j) {
      if (j<i && j>n+1-i) {
        cout<<v[i][j]<<' ';
      }
    }
  }
  cout<<"\n";
  //zona 4
  for (int i = 1; i<=n; ++i) {
    for (int j = 1; j<=n; ++j) {
      if (j>i && j>n+1-i) {
        cout<<v[i][j]<<' ';
      }
    }
  }

  return 0;
}
