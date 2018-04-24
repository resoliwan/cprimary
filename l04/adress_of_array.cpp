#include<iostream>
//hi
int main() {
  using namespace std;
  short tell[10];

  cout << tell << endl; //display &tell[0]
  cout << tell + 1<< endl; //only plus 2
  cout << &tell << endl; //display address of whole array
  cout << &tell + 1<< endl; //plus 20 (2 * 10 = whole array size)

  short (*pas)[10] = &tell;
  cout << pas + 1<< endl;

  return 0;
}
