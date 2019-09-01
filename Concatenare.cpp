#include<iostream>

using namespace std;

int main() {
  int n,stop=1,a,b,c;
  cin>>n>>a>>b>>c;
  for(int i = 1; i<=n; ++i) {
    for(int j = stop; j <10001; ++j) {
      cout<<a<<b<<c<<endl;
      if(!(j%a == 0) && !(j%b == 0) && !(j%c == 0)) {
        cout<<j<<" ";
        stop = j;
        break;
      }
    }
  }
  return 0;
}
