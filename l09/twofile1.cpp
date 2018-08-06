#include <iostream>
using namespace std;

int tom = 3; // external variable, external linkage.
int dick = 30; // external variable, external linkage.
static int harry = 300; // external variable, linternal linkage.

void remote_address();

int main() {
  cout << "main &tom: " << &tom << endl;
  cout << "main &dick: " << &dick << endl;
  cout << "main static &harry: " << &harry << endl;
  remote_address();

  return 0;
}

