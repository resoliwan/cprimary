#include <iostream>
#include <array>
using namespace std;
const int SEASONS = 4;
const array<string, SEASONS> snames = { "Spring", "Summer", "Fall", "Winter" };
void fill(array<double, SEASONS> *pa);
void show(const array<double, SEASONS> pa);

int main() {
  array<double , SEASONS> expense;
  fill(&expense);
  show(expense);

  return 0;
}

void fill(array<double, SEASONS> *pa) {
  for (int i = 0; i < SEASONS; i++) {
    cout << "Enter " << snames[i] << " expenses: ";
    cin >> (*pa)[i];
  }
}

void show(const array<double, SEASONS> pa) {
  cout << "EXPNSE: " << endl;
  for (int i = 0; i < SEASONS; i++)
    cout << snames [i] << " : " << pa[i] << endl;
}
