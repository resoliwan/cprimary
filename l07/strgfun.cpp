#include<iostream>

unsigned int c_in_str(const char * str, char ch);

int main() {
  using namespace std;
  char mmm[15] = "minimum";
  char *wall = "ululate";

  unsigned int ms = c_in_str(mmm, 'm');
  cout << ms << " m characters in " << mmm << endl;

  unsigned int us = c_in_str(wall, 'u');
  cout << us << " u characters in " << wall << endl;

  return 0;
}

unsigned int c_in_str(const char * str, char ch) {
  unsigned int c = 0;
  while (*str) {
    if (*str == ch) 
      ++c;

    ++str;
  }
  return c;
}


