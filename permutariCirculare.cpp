#include <iostream>
using namespace std;

int rotate ( int k, int n ) {

  while (k > n) {
    k -= n;
  }
  return k;
}
void leftRotate(int arr[], int n, int k)
{
    int mod = k % n;
    for (int i = 0; i < n; i++) {
        cout << (arr[(mod + i) % n]) << " ";
      }
}
void rightRotate(int arr[],int n, int k) {
  int dif = n - k;
  for (int i = 0; i < n; i++) {
      cout << (arr[(dif + i) % n]) << " ";
    }
}

int main()
{
    int arr[1000002],p;
    int n, k;
    cin>>n>>k>>p;
    for (int i = 0; i<n; ++i) {
      cin>>arr[i];
    }
    if (k == 0) {
       for (int i = 0; i<n; ++i) {
      cout<<arr[i]<<' ';
    }
    } else {
    if (p == 1)
        leftRotate(arr, n, rotate(k,n));
    if (p == -1)
        rightRotate(arr,n,rotate(k,n));
    }


    return 0;
}
