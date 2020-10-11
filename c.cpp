#include<iostream>

using namespace std;

int main() {
 int x,y,crescator=0,descrescator=0,nemonoton=1, verificat,cifre=1;

 cin>>x;
if(x==0)
{
  cout<<"nemonoton";
} else {
do {
  cin>>y;
if(y!=0) {
  verificat = 0;
  if(x<=y)
 {
   crescator = 1;
   verificat = 1;
 } else if (x>=y && verificat==0){
   descrescator = 2;
 }
 if (x==y) {
   ++nemonoton;
 }
 x=y;
 ++cifre;
}
}

 while(y);


if(nemonoton == cifre) {
 cout<<"nemonoton";
} else if(crescator == 1 && descrescator == 0) {
    cout<<"crescator";
  } else if (crescator == 0 && descrescator == 2) {
    cout<<"descrescator";
  } else if (crescator == 1 && descrescator == 2){
    cout<<"nemonoton";
  }
}

  return 0;
}
