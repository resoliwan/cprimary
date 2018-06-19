#include<iostream>

const int ARRSIZE = 8;
using namespace std;

int sum_arr(int arr[], int size);

int main() {
  int cookies[ARRSIZE] = {1, 1, 1, 1, 1, 1, 1, 1};
  cout << "Array Address: " << cookies << " sizeof: " << sizeof cookies << endl;
  sum_arr(cookies, 2);
  sum_arr(cookies, 3);
  sum_arr(cookies, 4);
  sum_arr(cookies + 4, 4);

  return 0;
}

int sum_arr(int arr[], int size) {
  cout << "Array Address: " << arr << " sizeof: " << sizeof arr << endl;
  int total = 0;
  for (int i = 0; i < size; ++i)
    total += arr[i];
  return total;
}
