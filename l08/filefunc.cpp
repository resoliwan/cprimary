#include <iostream>
#include <fstream>
using namespace std;

void write(ostream & os, const double fo, const double fe[], const int size);
const int SIZE = 1;

int main() {
  ofstream fout;
  const string filename = "hi.txt";
  fout.open(filename);
  if (!fout.is_open()) {
    cout << "Can't open " << filename << endl;
    exit(EXIT_FAILURE);
  }

  double objective;
  cout << "Enter the focal length of telescope objective in mm: ";
  cin >> objective;

  double eps[SIZE];
  cout << "Enter the focal length, in mm, of 5 eyepieces: " << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << "Eyepiece #" << i + 1 << ": ";
    cin >> eps[i];
  }

  write(cout, objective, eps, SIZE);
  write(fout, objective, eps, SIZE);

  cout << "Done" << endl;
  return 0;
}

// void write(const double val, const double & ar[]) {
void write(ostream & os, const double fo, const double fe[], const int size) {
  ios_base::fmtflags initial;
  initial = os.setf(ios_base::fixed);
  os.precision(0);
  os << "Focal lenght of objective: " << fo << " mm" << endl;

  os.setf(ios::showpoint);
  os.precision(1);
  os.width(12);
  os << "f.l eyepiece";
  os.width(15);
  os << "mangification" << endl;
  for (int i = 0; i < size; i++) {
    os.width(12);
    os << fe[i];
    os.width(15);
    os << fo / fe[i] + 0.5 << endl;
  }
  os.setf(initial);
}

