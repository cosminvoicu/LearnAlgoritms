#include<iostream>

using namespace std;

int sumcif(int n)
{
    int sumcif=0;

    while(n)
    {
     sumcif+=n%10;
     n/=10;
    }
    cout<<sumcif;
}
int main()
{
  int n;
  cin>>n;
  sumcif(n);
  return 0;
}
