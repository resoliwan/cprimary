#include <iostream>
#ifndef STIRNGBAD_H_
#define STIRNGBAD_H_
class String
{
private:
  char * str;
  int len;
  static int num_strings;
  static const int CINLIM = 80;
public:
  String(const char * s);
  String(const String & sb);
  String();
  ~String();

  int length() const { return len; };

  String & operator=(const String & sb);
  String & operator=(const char * s);
  char & operator[](int i);
  const char & operator[](int i) const;

  friend bool operator<(const String & st, const String & st2);
  friend bool operator>(const String & st, const String & st2);
  friend bool operator==(const String & st, const String & st2);
  friend std::ostream & operator<<(std::ostream & os, const String & st);
  friend std::istream & operator>>(std::istream & is, String & st);

  static int HowMany();
};
#endif
