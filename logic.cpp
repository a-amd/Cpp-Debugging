// This code has logic bugs
// Use a debugger like gdb to squash it

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int y = 10;
  int x = 3;

  if(x > y) {
    cout << "x is greater than y" << endl;
  } else if( x = y ) {
    cout << "x is equal to y" << endl;
  } else {
    cout << "x is less than y" << endl;
  }

  return 0;
}
