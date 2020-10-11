#include<iostream>


using namespace std;

int sir3[100001];
void interclasare(int sir1[100001], int sir2[100001], int sir3[100001],int n,int m) {
  int i = 1, j = 1, p = 1;

  while (i<=n && j<=m) {
    if (sir1[i] < sir2[j]) {
      sir3[p++] = sir1[i++];
    } else {
      sir3[p++] = sir2[j++];
    }
  }
  while ( i<=n ) {
    sir3[p++] = sir1[i++];
  }
  while ( j<=m ) {
    sir3[p++] = sir2[j++];
  }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int sir[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(sir,l,m);
        mergeSort(sir,m+1,r);

        merge(sir,l,m,r);
    }
}

int main() {
  int sir1[100001], sir2[100001],n,k, m = 1;

  cin>>n;
  k = n/2;
  for ( int i = 1; i<=n; ++i) {
    if ( i <= k ) {
      cin>>sir1[i];
    } else {
      cin>>sir2[m++];
    }
  }

  mergeSort(sir1,1,k);
  mergeSort(sir2,1,m-1);
  interclasare (sir1,sir2,sir3,k,m-1);

  cout<<"\n";
  for ( int i = 1; i<=n; ++i) {
    cout<<sir3[i]<<' ';
  }
  return 0;
}
