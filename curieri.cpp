#include<iostream>

using namespace std;

int main(){
    int v[1002],n, contor = 0, cursor, pozInitial,sterge;

    cin>>n;
    for(int i = 1; i<=n; ++i) {
      cin>>v[i];
    }
    for(int i = 1; i<=n; ++i) {
      cursor = i;
      pozInitial = i;
      if(v[i]!=-1) {

        while(cursor) {
          if(v[cursor] == pozInitial) {
            ++contor;
            v[cursor] = -1;
            break;
          } else {
            sterge = cursor;
            cursor = v[cursor];
            v[sterge] = -1;
          }
        }
        }
    }
    cout<<contor;
    return 0;
}
