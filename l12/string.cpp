#include <cstring>
#include <iostream>
#include "string.h"
using std::cout;

int String::num_strings = 0;

String::String(const char * s)
{
  len = std::strlen(s); 
  str = new char[len + 1];
  std::strcpy(str, s);
  num_strings++;
}

String::String(const String & sb) {
  len = sb.len;
  str = new char[len + 1];
  std::strcpy(str, sb.str);
  num_strings++;
}

String::String()
{
  len = 0;
  str = new char[1];
  str[0] = '\0';
  num_strings++;
}

String::~String()
{
  num_strings--;
  delete [] str; 
}

String & String::operator=(const String & sb)
{
  if (this == &sb)
    return *this;
  delete [] str;
  len = sb.len;
  str = new char[len + 1];
  std::strcpy(str, sb.str);

  return *this;
}

String & String::operator=(const char * s)
{
  delete [] str;
  len = std::strlen(s);
  str = new char[len + 1];
  std::strcpy(str, s);
  return *this;
}

char & String::operator[](int i)
{
  return str[i];
}

const char & String::operator[](int i) const
{
  return str[i];
}


int String::HowMany()
{
  return num_strings;
}

bool operator<(const String & st1, const String & st2)
{
  return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String & st1, const String & st2)
{
  return st2 < st1;
}

bool operator==(const String & st1, const String & st2)
{
  return (std::strcmp(st1.str, st2.str) == 0);
}

std::ostream & operator<<(std::ostream & os, const String & s)
{
  os << s.str;
  return os;
}

std::istream & operator>>(std::istream & is, String & st)
{
  char temp[String::CINLIM];
  is.get(temp, String::CINLIM);
  if (is)
    st = temp;
  while (is && is.get() != '\n')
    continue;
  return is;
}

