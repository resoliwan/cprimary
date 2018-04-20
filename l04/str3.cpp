#include <iostream>
#include <string>
#include <cstring>

int main() 
{
  using namespace std;

  char char1[20];
  char char2[20] = "char2";

  strcpy(char1, char2);
  strcat(char2, "hi");

  cout << char1 << endl;
  cout << char2 << endl;
  cout << strlen(char2) << endl;

  return 0;
}
