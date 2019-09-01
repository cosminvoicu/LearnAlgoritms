#include<iostream>

using namespace std;

int main() {
  int N, A, B, C,trueStatement = 1, contor = 1;
  cin>>N>>A>>B>>C;
  for(int i = 1; i <= N; ++i) {
    trueStatement = 1;
    while (trueStatement) {
      if (contor%A!=0 && contor%B!=0 && contor%C!=0) {
        std::cout <<contor<<" ";
        trueStatement = 0;
      }
      ++contor;
    }
  }
  return 0;
}
