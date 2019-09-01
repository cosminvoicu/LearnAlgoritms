#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
  /*               1234567
  12345          1 ###*###
1 ##*##          2 ##* *##
2 #* *#          3 #*   *#
3 *   *          4 *     *
4 #* *#          5 #*   *#
5 ##*##          6 ##* *##
                 7 ###*###

  */
  int n, lungime = 0;
  cin>>n;
  lungime = n/2;
  for(int i = -lungime; i <= lungime; ++i) {
    for(int j = -lungime; j <= lungime; ++j) {
        if ( abs(i) + abs(j) == lungime ) {
          std::cout << "*";
        } else {
          std::cout << " ";
        }
      }
      std::cout << "\n";
  }
  return 0;
}
