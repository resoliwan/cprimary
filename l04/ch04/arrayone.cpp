#include <iostream>

int main() 
{
  using namespace std;
  int yams[3];
  yams[0] = 1;
  yams[1] = 1;
  yams[2] = 1;

  int yamcosts[3] = {10, 20, 30};

  cout << "szie of array " << sizeof yamcosts << endl;
  cout << "size of element " << sizeof yamcosts[0] << endl;

  return 0;
}
