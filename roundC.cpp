#include<iostream>

using namespace std;

int main() {
 int n, array[300001];
 cin>>n;
 for(int i =1;i<=n;++i) {
   cin>>array[i];
 }
 int mid =0, l = 0, r = 0;
 int suma_xor_left = 0;
 int suma_xor_right = 0;
 for(int i =1;i<=n;++i)
   for(int j=i+1; j<=n; ++j)
      { l = array[i];
        r = array[j];
        mid=(array[i]+array[j]-1)/2;
        int c_mid = mid;
        if((array[i]-array[j]+1) >= 0)
        {
          for(int x = l;x<=mid;++x)
          {
            suma_xor_left^=array[x];
          }
          for(int y = c_mid+1;y<=r;++y)
          {
            suma_xor_right ^=array[y];
          }

          if(suma_xor_left == suma_xor_right)
          {

            return 0;
          }
        }
      }
      int afisare = l^r;
      cout<<afisare<<"\n";

  return 0;
}
