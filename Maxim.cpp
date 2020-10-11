#include<iostream>

using namespace std;

int main() {
  long long int Max = 0, numar;
  do {
    cin>>numar;
    if (numar > Max) {
      Max = numar;
    }
  } while (numar);

  if (Max == 0) {
    cout<<"NU EXISTA";
  } else {
    cout<<Max;
  }
  return 0;
}
