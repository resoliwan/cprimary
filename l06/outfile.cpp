#include<iostream>
#include<fstream>

int main() {
  using namespace std;
  char makeNModel[50] = {0};
  int year;
  double price;

  ofstream fout;
  fout.open("carinfo.txt");

  cout << "Enter the make and model of automobile: ";
  cin.getline(makeNModel, 50);
  cout << "Enter the model year: ";
  cin >> year;
  cout << "Enter the original asking price: ";
  cin >> price;

  cout.precision(4);
  cout << fixed;
  cout.setf(ios_base::showpoint);
  cout << "Make and model: " << makeNModel << endl;
  cout << "Year: " << year << endl;
  cout << "Was asking $:" << price << endl;

  fout.precision(1);
  fout << fixed;
  fout.setf(ios_base::showpoint);
  fout << "Make and model: " << makeNModel << endl;
  fout << "Year: " << year << endl;
  fout << "Was asking $:" << price << endl;
  fout.close();

  return 0;
}

