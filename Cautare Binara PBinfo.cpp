#include<iostream>

/*
Date intrare:
n - numarul de elemente al vectorului x
m - numarul de elemente ale vectorului y
x - vector de numere naturale in care vom cauta elemente
y - vector de numere naturale din care luam elemente sa le cautam in vectorul x
Cerinta:
Programul va afișa pe ecran m valori 0 sau 1, separate prin exact un spațiu.
A j-a valoare afișată este 1, dacă al j-lea element al șirului y apare în x, respectiv  0 în caz contrar.
*/

using namespace std;

int main() {
  int n, m, middleOfVector, left, right, x[25000], y[200000];

  //citim vectorul x de la tastatura
  cin>>n;
  for (int i = 1; i <= n; ++i) {
    cin>>x[i];
  }
  //citim vectorul y de la tastatura
  cin>>m;
  for (int j = 1; j <= m; ++j) {
    cin>>y[j];
  }

  // cautam elemente din y in sirul x, in caz ca gasim vom afisa 1 altfel 0
  for (int k = 1; k <= m; ++k) {
    int value = y[k];
    left = 1;
    right = n;
    while (left<right) {
      middleOfVector = (left + right) / 2;
      if(value > x[middleOfVector]) {
        left = middleOfVector + 1;
      } else {
        right = middleOfVector;
      }
    }

    if (x[left] == value) {
      cout<<"1"<<" ";
    } else {
      cout<<"0"<<" ";
    }
  }
return 0;

}
