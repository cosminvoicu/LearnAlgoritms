#include<iostream>

using namespace std;

int main() {
  /*
   1234
1  ****
2  *$$*
3  *$$*
4  ****

  */
  int n, printendl = 0;
  cin>>n;
  for(int i = 1; i <= n; ++i) {
    if(printendl) {
      cout<<"\n";
    }
    printendl = 1;
    for(int j = 1; j <= n; ++j) {
      if(i == 1 || i == n || j == 1 || j == n) {
        cout<<"*";
      } else {
        cout<<"$";
      }
    }
  }
  return 0;
}
