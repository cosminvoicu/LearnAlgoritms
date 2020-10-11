#include<iostream>

using namespace std;

int main() {
  int v[1001],n, varNum,firstNum,secondNum, crescator, descrescator;

  cin>>n;
  for(int i = 0; i<n; ++i) {
    cin>>v[i];
  }

  for(int i = 0; i<n; ++i) {
    varNum = v[i];  // 123454321 45921
    firstNum = varNum%10; varNum/=10; crescator = 0; descrescator = 0;
    while(varNum) {
      secondNum = varNum%10;
      if (firstNum<secondNum) {
        crescator = 1;
        descrescator = 0;
      } else if (firstNum<secondNum) {
        descrescator = 1;
        crescator = 0;
      }
      firstNum = secondNum;
      varNum/=10;
    }
    if (crescator && descrescator)  {
      cout<<1<< '\n';
    } else {
      std::cout << 0 << '\n';
    }
  }
  return 0;
}
