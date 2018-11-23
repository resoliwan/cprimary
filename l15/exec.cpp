#include <exception>
#include <iostream>

void myQuit() 
{
  using namespace std;
  cout << "hello";
  exit(5);
}

set_terminate(myQuit);
