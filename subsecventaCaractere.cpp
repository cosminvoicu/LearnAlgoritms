#include<iostream>
#include<string>

using namespace std;

int main() {
  char s1[102],s2[102];
  char * p;
  cin.getline(s1,101);
  cin.getline(s2,101);
  int lungimeS2 = 0, primulCaracter[1001], caractereConsecutive[1001], caractereC, iterator, validare = 0;
  for (int i = 0; s2[i]; ++i) {
    ++lungimeS2;
  }
  int j = -1;
  for ( int i = 0; s1[i]; ++i ) {
    if (s2[0] == s1[i])
      primulCaracter[++j] = i;
  }
  for ( int k = 0; k<=j; ++k ) {
    caractereC = 0;
    iterator = 0;

    for ( int i = primulCaracter[k]; s1[i]; ++i) {
      if ( s2[iterator] == s1[i] ) {
        ++caractereC;
      } else {
        break;
      }
      ++iterator;
    }
    caractereConsecutive[k] = caractereC;
  }

  for ( int i = 0; i<=j; ++i) {
    if ( caractereConsecutive[i] == lungimeS2 ) {
      validare = 1;
    }
  }
  if ( validare ) {
    cout<<"DA";
  } else {
    cout<<"NU";
  }
  return 0;
}
