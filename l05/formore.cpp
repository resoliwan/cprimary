#include<iostream>

const int ArSize = 15;

int main() {
  using namespace std;
  long long factorials[ArSize] = {1};

  for (int i = 1; i < ArSize; i++) 
    factorials[i] = i * factorials[i-1];

  for (int i = 0; i < ArSize; i++) 
    cout << i << "! = " << factorials[i] << endl;

  return 0;
}
