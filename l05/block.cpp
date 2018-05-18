#include<iostream>

int main() {
  using namespace std;
  cout << "The program will sum and average three number for you." << endl;
  cout << "Please enter three values: \n";
  double sum = 0;
  double val = 0;
  int inputCount = 3;

  for (int i = 0; i < inputCount; i++) {
    cout << "Values " << (i + 1) << " : ";
    cin >> val;
    sum += val;
  }

  cout << "Three exquisite choices indeed! they sum to " << sum;
  cout << " and average to " << sum / inputCount << endl;

  return 0;
}
