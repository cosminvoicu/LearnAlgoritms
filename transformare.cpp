#include<iostream>
#include<string>
#include<cctype>

using namespace std;



int main() {
  char s1[1002], s2[1002];
  cin.getline(s1,1001);

  for ( int i = 0; s1[i]; ++i ) {
    if (islower(s1[i])) {
      s1[i] = toupper(s1[i]);
    } else if (isupper(s1[i])) {
      s1[i] = tolower(s1[i]);
    }
  }
  cout<<s1;
}
