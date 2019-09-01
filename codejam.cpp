#include<iostream>

using namespace std;

int main() {
  int n[1000],x;
int for_break;
  cout<<"Introduceti cate N-uri aveti: ";
  cin>>x;
  //citeste vectorul de la tastatura
  for(int k=0;k<x;++k)
    cin>>n[k];

  for(int w=0;w<x;++w) {
  for(int i = n[w]/2;i<=n[w];++i) {
    for(int j=1;j<=n[w]/2;++j){
      int verificare = 0;
      verificare = i+j;
      if(verificare == n[w]) {
        cout<<i<<" "<<j<<"\n";
        for_break = 1;
      }
      if(for_break)
        break;

    }
  }
}

  return 0;
}
