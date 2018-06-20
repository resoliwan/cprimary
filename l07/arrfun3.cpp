#include<iostream>

const int ArrSize = 5;

int fill_arr(double arr[], int n);
void show_arr(const double arr[], int n);
void revalue(double arr[], int n, double r);

int main() {
  using namespace std;
  double properties[ArrSize];
  int size = fill_arr(properties, ArrSize);
  show_arr(properties, size);
  if (size > 0) {
    double factor;
    cout << "Enter revalue factor: ";
    while (!(cin >> factor)) {
      cin.clear();
      while(cin.get() != '\n')
        continue;
      cout << "Bad input; Please enter anumber";
    }
    revalue(properties, size, factor);
    show_arr(properties, size);
  }

  return 0;
}

int fill_arr(double arr[], int n) {
  using namespace std;
  int i;
  for (i = 0; i < n; i++) {
    double value;
    cout << "Enter value #" << i + 1 << ": ";
    cin >> value;
    if(!cin) {
      cin.clear();
      while(cin.get() != '\n')
        continue;

      cout << "Bad input;" << endl;;
      break;
    } else if (value < 0) 
      break;

    arr[i] = value;
  }
  return i;
}

void show_arr(const double arr[], int n) {
  using namespace std;
  for (int i = 0; i < n; i++)
    cout << "Property #" << i + 1 << ": " << arr[i] << endl;
}

void revalue(double arr[], int n, double r) {
  using namespace std;
  for (int i = 0; i < n; i++)
    arr[i] *= r;
}
