#include<iostream>
#include<string>

using namespace std;

void addChars(char s1[]) {
  char vocale[100]="aeiouAEIOU", s2[300];
  for ( int j = 0; s1[j]; ++j) {
    if ( strchr(vocale,s1[j])) {
    strcpy(s2, s1 + j);
    strcpy(s1 + j + 1, s2);
    s1[j+1] = '*';
    }
  }
}

int main() {
  char s1[202] = "ppp";
  addChars(s1);
  cout<<s1;
}
