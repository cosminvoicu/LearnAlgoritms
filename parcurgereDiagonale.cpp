
#include <iostream>

using namespace std;

long long princ[2002], sec[2002], maxx;
int main()
{
  int n, i,d,j,temp;
  maxx=-1e9;;
  cin>>n;
  for(i=1; i<=n; i++)
  {
      for(j=1;j<=n;j++)
      {
          cin>>temp;
          d=i-j+n;
          cout<<d<<' '<<" princ"<<"\n";
          princ[d]+=temp;
          d=i+j-1;
          cout<<d<<' '<<" sec"<<"\n";
          sec[d]+=temp;
      }
  }
  for(i=1;i<=2*n-1;i++)
  {
      if(princ[i]>maxx)
          maxx=princ[i];
      if(sec[i]>maxx)
          maxx=sec[i];
  }
  cout<<maxx;
  return 0;
}
