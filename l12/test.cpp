#include <iostream>
using namespace std;

int main() {
  char * ch = new char;
  delete [] ch;
  std::cout << "@  "<< ch << "   @\n";

  return 0;
}

