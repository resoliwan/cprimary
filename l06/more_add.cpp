#include<iostream>

const char * qualify[4] = {
  "Eating",
  "Talking",
  "Dance",
  "Swim"
};
int main() {
  using namespace std;
  int age = 0;
  int index = 0;
  cout << "Enter your age in years: ";
  cin >> age;

  if (age > 0 && age < 5)
    index = 0;
  else if (age >= 5 && age <10)
    index = 1;
  else if (age >= 10 && age <20)
    index = 2;
  else 
    index = 3;

  cout << "You qualify for " << qualify[index] << endl;

  return 0;
}

