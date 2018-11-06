#include <iostream>
#include <new>
#include <cstdlib>
#include <exception>

using namespace std;

struct Big
{
  double stuff[20000000000];
};

int main()
{
  Big * pb;
  try 
  {
    pb = new Big[100000];

  } catch (bad_alloc & ba)
  {
    cout << "Caught the exception!\n";
    cout << ba.what() << endl;
    exit(EXIT_FAILURE);
  }
  return 0;
}
