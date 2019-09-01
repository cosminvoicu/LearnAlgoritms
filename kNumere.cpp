#include<iostream>

using namespace std;

int main() {
  int k, n;
  cin>>k>>n;
  for(int i = n; i > 0; --i) {
    cout<<--k<<" ";
  }
  return 0;
}
