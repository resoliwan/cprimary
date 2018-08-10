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

  cout << "Calling new placement new:\n";
  pd1 = new double[N];
  pd2 = new (buffer) double[N];

  for (i = 0; i < N; i++)
    pd1[i] = pd2[i] = 1000 + 20.0 * i;

  cout << "Momory adressed:\n";
  cout << "  heap: " << pd1 << " statc: " << (void *)buffer << " pd2: " << pd2 << endl;
  cout << "Memory contents:\n";
  for (i = 0; i < N; i++) 
  {
    cout << pd1[i] << " at " << &pd1[i] << "; ";
    cout << pd2[i] << " at " << &pd2[i] << endl;
  }

  cout << "Calling new and placement new a second time:\n";

  double * pd3, * pd4;

  pd3 = new double[N];
  pd4 = new (buffer)double[N];

  for (i = 0; i < N; i++)
    pd3[i] = pd4[i] = 2000  + 20.0 * i;
  cout << "Memory addresses:\n";
  cout << "  heap: " << pd3 <<" static: " << pd4 << endl;
  cout << "Memory contents:\n";
  for (i = 0; i < N;i ++) {
    cout << pd3[i] << " at " << &pd3[i] << "; ";
    cout << pd4[i] << " at " << &pd4[i] << endl;
  }

  cout << "Calling new and placement new a third time:\n";
  delete [] pd1;
  pd1 = new double[N];
  pd2 = new (buffer + N * sizeof(double)) double[N];

  for (i = 0; i < N; i++) 
    pd1[i] = pd2[i] = 3000 + 20.0 * i;
  cout << "Memory addresses:\n";
  cout << "  heap: " << pd1 <<" static: " << pd2 << endl;
  cout << "Memory contents:\n";
  for (i = 0; i < N;i ++) {
    cout << pd1[i] << " at " << &pd1[i] << "; ";
    cout << pd2[i] << " at " << &pd2[i] << endl;
  }

  delete [] pd1;
  delete [] pd3;


  return 0;
}

