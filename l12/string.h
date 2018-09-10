#include <iostream>
#ifndef STIRNGBAD_H_
#define STIRNGBAD_H_
class Stringbad
{
private:
  char * str;
  int len;
  static int num_strings;
public:
  Stringbad(const char * s);
  Stringbad(const Stringbad & sb);
  Stringbad();
  ~Stringbad();
  Stringbad & operator=(const Stringbad & sb);

  friend std::ostream & operator<<(std::ostream & os, const Stringbad & st);
};
#endif
