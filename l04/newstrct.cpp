#include<iostream>

struct inflatable {
  char name[20];
  float volume;
  double price;
};

int main() {
  using namespace std;

  inflatable *ps = new inflatable;
  inflatable i = { "hello", 10, 100 };
  cout << "Enter name of inflatable item \n";
  cin >> ps->name;

  cout << "Enter volume of inflatable item \n";
  cin >> ps->volume;

  cout << "Enter price of inflatable item \n";
  cin >> (*ps).price;

  cout << "ps.name: " << ps->name << endl;
  cout << "ps.volume: " << (*ps).volume << endl;
  cout << "ps.price: " << ps->price << endl;

  cout << i.name << endl;

  return 0;
}
