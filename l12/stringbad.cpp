#include <cstring>
#include <iostream>
#include "stringbad.h"
using std::cout;

int Stringbad::num_strings = 0;

Stringbad::Stringbad(const char * s)
{
  len = std::strlen(s); 
  str = new char[len + 1];
  std::strcpy(str, s);
  num_strings++;
  cout << num_strings << ": " << str << " object created\n";
}

Stringbad::Stringbad()
{
  len = 4;
  str = new char[len];
  std::strcpy(str, "c++");
  num_strings++;
  cout << num_strings << ": " << str << " object created\n";
}

Stringbad::~Stringbad()
{
  cout << str << " object deleted,";
  num_strings--;
  cout << num_strings << " left\n";
  delete [] str; 
}

std::ostream & operator<<(std::ostream & os, const Stringbad & s)
{
  os << s.str;
  return os;
}
