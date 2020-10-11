#include<iostream>

using namespace std;

int maxRecursiv(int N, int v[]) {
  if (N == 0)
    return 0;

  return max(v[N], maxRecursiv(N-1, v));
}

int main() {
 int v[5] = {0,5, 100, 1, 3};
 std::cout << maxRecursiv(4, v);
  return 0;
}
