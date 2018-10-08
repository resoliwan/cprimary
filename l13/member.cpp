#include <iostream>
using namespace std;

class Base {
private:
  char str[40];
public:
  Base(char s[]) { strcpy(str, s); };
  void set(char s[]) { strcpy(str, s); };
  void Show() const { cout << str << endl; };
};

int main() {
  char s[40] = {"hi"};
  Base b1(s);
  Base b2 = b1;
  char s2[40] = {"@@"};

  b1.set(s2);
  b2.Show();

  return 0;
}

