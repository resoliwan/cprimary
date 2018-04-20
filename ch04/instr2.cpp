#include <iostream>
int main() 
{
  using namespace std;
  const int SIZE = 20;

  char name[SIZE];
  char dessert[SIZE];

  cout << "Enter your name" << endl;
  cin.getline(name, 20);
  cout << "Your name is :" << name << endl;
  cout << "Enter your dessert" << endl;
  cin.getline(dessert, 20);
  cout << "Dessert is :" << dessert << endl;

  return 0;
}
