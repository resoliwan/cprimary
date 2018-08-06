#include <iostream>
using namespace std;

double warming = 0.5;

void update(double dt);
void local();

int main() {
  cout << "Global warming is " << warming << endl;
  update(1);
  cout << "After update, global warming is " << warming << endl;
  local();
  cout << "After local, global warming is " << warming << endl;

  return 0;
}

