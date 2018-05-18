#include<iostream>

int main() {
  using namespace std;

  char animal[20] = "bear";
  const char * bird = "wren";
  char * ps;

  cout << animal << " and " << bird << "\n";

  cout << "Enter a kind of bird" << endl;
  cin >> animal;

  ps = animal;
  
  cout << "Before using strcpy() \n";
  cout << animal << " at " << (int *) animal << endl;
  cout << ps << " at " << (int *) ps << endl;

  cout << strlen(animal) << endl;

  ps = new char[strlen(animal) + 1];
  strcpy(ps, animal);

  cout << "After using strcpy() \n";
  cout << animal << " at " << (int *) animal << endl;
  cout << ps << " at " << (int *) ps << endl;

  delete [] ps;

  return 0;
}
