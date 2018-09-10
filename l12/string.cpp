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

Stringbad::Stringbad(const Stringbad & sb) {
  len = sb.len;
  str = new char[len + 1];
  std::strcpy(str, sb.str);
  num_strings++;
  cout << num_strings << ": " << str << " object created\n";
  //Shoud I return sb?
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

Stringbad & Stringbad::operator=(const Stringbad & sb)
{
  if (this == &sb)
    return *this;
  delete [] str;
  len = sb.len;
  str = new char[len + 1];
  std::strcpy(str, sb.str);

  return *this;
}

std::ostream & operator<<(std::ostream & os, const Stringbad & s)
{
  os << s.str;
  return os;
}


