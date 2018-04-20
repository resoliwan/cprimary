#include<iostream>
#include<string>

struct inflatable {
  char name[20];
  float volume;
  double price;
};

struct withString {
  std::string name;
};

int main() {
  using namespace std;
  inflatable guest = {
    "HI",
    10.4,
    100
  };

  inflatable guest2 = {
    "Guest2",
    20.2,
    200
  };

  inflatable test = {};

  cout << guest.name << endl;
  cout << guest2.price << endl;
  cout << test.name << endl;

  withString hi = {"string HI"};
  cout << hi.name << endl;

  return 0;
}
