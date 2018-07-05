#include <iostream>
#include <string>
using namespace std;

struct free_throw {
  string name;
  int made;
  int attempts;
  float percent;
};

void display(const free_throw & ft);
void set_pc(free_throw & ft);
free_throw & accumulate(free_throw & target, const free_throw & source);

int main() {
  free_throw one = {"one", 1, 1, 0.0};
  free_throw two = {"two", 10, 10, 0.0};
  free_throw three = {"three", 100, 100, 0.0};
  free_throw four = {"four", 1000, 1000, 0.0};
  free_throw five = {"five", 10000, 10000, 0.0};
  free_throw team = {"team", 0, 0, 0.0};
  free_throw dup;

  display(one);
  set_pc(one);
  display(one);
  accumulate(team, one);
  display(team);

  display(accumulate(team, two));
  accumulate(accumulate(team, three), four);
  display(team);

  dup = accumulate(team, five);
  display(team);
  display(dup);

  set_pc(four);
  accumulate(dup, five) = four;
  display(dup);

  return 0;
}

void set_pc(free_throw & ft) {
  if (ft.attempts != 0.0) {
    ft.percent = ft.made / ft.attempts * 100;
  } else {
    ft.percent = 0.0;
  }
}

void display(const free_throw & ft) {
  cout << "name: " << ft.name;
  cout << " made: " << ft.made;
  cout << " attempts: " << ft.attempts;
  cout << " percent: " << ft.percent << endl;
}

free_throw & accumulate(free_throw & target, const free_throw & source) {
  target.made += source.made;
  target.attempts += source.attempts;
  if (target.attempts != 0) {
    set_pc(target);
  }
  return target;
}
