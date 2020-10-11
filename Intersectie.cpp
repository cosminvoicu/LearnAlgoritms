#include<iostream>

using namespace std;

int cautareBinara (int D[], int z, int x) {
  int stanga = 1, dreapta = z, mijloc ;

  while (stanga<dreapta) {
    mijloc = (stanga + dreapta)/2;
    if (x>D[mijloc])
      stanga = mijloc + 1;
    else
      dreapta = mijloc;
  }
  if (x == D[stanga])
    return stanga;
  else
    return 0;
}
void intersectie3(int A[], int B[], int C[]){


  int  iterator = 1,n,m, validare;
  n = A[0];
  m = B[0];
  for (int i = 1; i<=n; ++i) {
    validare = cautareBinara(B,m,A[i]);

    if (validare) {
      C[iterator] = A[i];
      B[validare] = -1;
      ++iterator;
    }
  }
  if (iterator != 1)
    C[0] = --iterator;
}

int main() {
  int A[] = {5, 1, 2, 2, 5, 8}  , B[] = {6, 2, 2, 2, 6, 7, 8}, C[10001];
  intersectie3( A , B , C);
  int n = C[0];
  for (int i = 0; i<=n; ++i) {
    cout<<C[i]<<' ';
  }
  return 0;
}
