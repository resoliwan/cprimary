#include<iostream>

int main() {
  using namespace std;
  int ArSize = 10;
  char name[ArSize];

  cout << "Your first name, please: ";
  cin >> name;
  cout << "Here is your name, verticalized and ASCIIized" << endl;
  int i = 0;
  while (name[i] != '\0') {
    cout << name[i] << ": " << int(name[i]) << endl;
    i++;
  }

  return 0;
}

