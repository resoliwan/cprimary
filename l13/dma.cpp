#include <string>
#include <iostream>
#include "dma.h"

BaseDMA::BaseDMA(const char * l, int r)
{
  label = new char[std::strlen(l) + 1];
  std::strcpy(label, l);
  rating = r;
}

BaseDMA::BaseDMA(const BaseDMA & rs)
{
  label = new char[std::strlen(rs.label) + 1];
  std::strcpy(label, rs.label);
  rating = rs.rating;
}

BaseDMA::~BaseDMA() 
{
  delete [] label;
}

BaseDMA & BaseDMA::operator=(const BaseDMA & rs)
{
  if (this == &rs)
    return *this;
  delete [] label;
  label = new char[std::strlen(rs.label) + 1];
  std::strcpy(label, rs.label);
  rating = rs.rating;
  return *this;
}

std::ostream & operator<<(std::ostream & os, const BaseDMA & rs)
{
  os << "Label: " << rs.label << std::endl;
  os << "Rating: " << rs.rating << std::endl;
  return os;
}

LacksDMA::LacksDMA(const char * c, const char * l, int r)
  : BaseDMA(l, r)
{
  std::strncpy(color, c, COL_LEN - 1);
  color[COL_LEN - 1] = '\0';
}

LacksDMA::LacksDMA(const char * c, const BaseDMA & rs)
  : BaseDMA(rs)
{
  std::strcpy(color, c);
  color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream & os, const LacksDMA & rs)
{
  os << (const BaseDMA &) rs;
  os << "Color: " << rs.color << std::endl;
  return os;
}

HasDMA::HasDMA(const char * s, const char * l, int r)
  : BaseDMA(l, r)
{
  style = new char[std::strlen(s) + 1];
  std::strcpy(style, s);
}

HasDMA::HasDMA(const char * s, const BaseDMA & rs)
  : BaseDMA(rs)
{
  style = new char[std::strlen(s) + 1];
  std::strcpy(style, s);
}

HasDMA::HasDMA(const HasDMA & rs)
  : BaseDMA(rs)
{
  std::cout << "hasDMA::copy constructor called\n";
  style = new char[std::strlen(rs.style) + 1];
  std::strcpy(style, rs.style);
}

HasDMA::~HasDMA()
{
  delete [] style;
}

HasDMA & HasDMA::operator=(const HasDMA & rs)
{
  std::cout << "hasDMA::operator= called\n";
  if (this == &rs)
    return *this;
  BaseDMA::operator=(rs);
  delete [] style;
  style = new char[std::strlen(rs.style) + 1];
  std::strcpy(style, rs.style);
  return *this;
}

std::ostream & operator<<(std::ostream & os, const HasDMA & rs)
{
  os << (const BaseDMA &) rs;
  os << "Style: " << rs.style << std::endl;
  return os;
}
