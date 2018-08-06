#include <iostream>
#include "coordin.h"
using namespace std;

int main() {
  rect r;
  polar p; 

  cout << "Enter the x and y values: ";
  while (cin >> r.x >> r.y) {
    rect_to_polar(r);
    show_polar(p);
    cout << "Next two numbers (q to quit): ";
  }

  return 0;
}
