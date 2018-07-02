#include <iostream>
using namespace std;

double pem(int lines);
double besty(int lines);
void estimate(int lines, double (*pf)(int lines));

int main() {
  int lines;
  cout << "How many lines of code do you need? ";
  cin >> lines;
  cout << "Here's Pem's estimatie: " << endl;
  estimate(lines, pem);
  cout << "Here's Besty's estimatie: " << endl;
  estimate(lines, besty);

  return 0;
}

double pem(int lines) {
  return lines * 1.1;
}

double besty(int lines) {
  return lines * 0.9;
}

void estimate(int lines, double (*pf)(int lines)) {
  cout << lines << " will take ";
  cout << (*pf)(lines) << " hour(s)\n";
}

