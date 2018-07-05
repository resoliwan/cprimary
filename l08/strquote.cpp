#include <iostream>
#include <string>
using namespace std;

string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(const string & s1, const string & s2);

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  cout << "Your string as entered" << input << endl;
  cout << version1(input, "***") << endl;
  cout << version2(input, "###") << endl;
  cout << version3(input, "@@@") << endl;

  return 0;
}


string version1(const string & s1, const string & s2) {
  string temp;
  temp = s1 + s2;
  return temp;
}

const string & version2(string & s1, const string & s2) {
  s1 = s2 + s1 + s2;
  return s1;
}

const string & version3(const string & s1, const string & s2) {
  string temp;
  temp = s1 + s2;
  return temp;
}
