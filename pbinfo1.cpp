#include<iostream>

using namespace std;
int fact(int n)
{
  int x=1;
  while(n){
    x*=n;
    --n;
    cout<<x<<"\n";
  }
  cout<<x;
}
int main()
{
  int n;
  cin>>n;
  cout<<fact(n)<<"\n";

}
