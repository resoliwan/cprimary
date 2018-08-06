#include <iostream>
using namespace std;

extern int tom; // external linkage
static int dick = 40; // internal linkage
int harry = 400; // external linkage

void remote_address() {
  cout << "remote &tom: " << &tom << endl;
  cout << "remote static &dick: " << &dick << endl;
  cout << "remote &harry: " << &harry << endl;

}
