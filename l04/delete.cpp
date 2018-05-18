#include<iostream>
using namespace std;
char* getname(void);

int main() {
  char * name;

  name = getname();
  cout << name << " at " << (int *) name << endl;
  delete [] name;

  name = getname();
  cout << name << " at " << (int *) name << endl;
  delete [] name;

  return 0;
}

char * getname(void) {
  char temp[80];

  cout << "before: " << temp << " at: " << (int *) temp << endl;
  cout << "Enter last name \n";
  cin >> temp;

  char * pn = new char[strlen(temp) + 1];
  strcpy(pn, temp);

  cout << "after strcpy: " << temp << endl;

  return pn;
}
