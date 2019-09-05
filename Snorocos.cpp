#include<iostream>

using namespace std;

int main() {
  int n;
  cin>>n;

  if (n%2 == 0) {
    std::cout << "NU ESTE NOROCOS";
  } else {
    int cifraNorocoasa = (n + 1) / 2;
    while (n) {
      cout<<cifraNorocoasa<<" ";
      --n;
      ++cifraNorocoasa;
    }
  }
  return 0;
}
