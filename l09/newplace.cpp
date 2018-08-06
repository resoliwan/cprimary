#include <iostream>
#include <new>
using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];


int main() 
{

  double * pd1, * pd2;
  int i;

  pd1 = new double[N];
  pd2 = new (buffer) double[N];

  for (i = 0; i < N; i++)
    pd1[i] = pd2[i] = 1000 + 20.0 * i;

  cout << "Calling new placement new:\n";
  cout << "Momory adressed:\n";
  cout << "  heap: " << pd1 << " statc: " << &buffer << " pd2: " << pd2 << endl;
  cout << "Memory contents:\n";
  for (i = 0; i < N; i++) 
  {
    cout << pd1[i] << " at " << &pd1[i] << "; ";
    cout << pd2[i] << " at " << &pd2[i] << endl;
  }

  cout << "Calling "

  return 0;
}

