#include<iostream>

using namespace std;

int main() {
    int n, v[101], min;

    cin>>n;
    for(int i = 1; i<=n; ++i) {
      cin>>v[i];
    }
    for(int i = 1; i<=n; ++i) {
      min = 1001;
      for( int j = 1; j<=n; ++j) {
        if(v[i]<v[j]){
          if(v[j]<min)
            min = v[j];
        }
      }
      if(min == 1001) {
        cout<<"-1"<<' ';
      } else {
        cout<<min<<' ';
      }
    }
    return 0;
}
s
