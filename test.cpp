#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
 string text = "Da, sa traiti!";
text.erase(2, text.size() - 2);
cout << text;
 
  return 0;
}