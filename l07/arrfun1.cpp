#include<iostream>

const int ARRSIZE = 8;
int sum_arr(int arr[], int size);

int main() {
  using namespace std;
  int cookies[ARRSIZE] = {1,2,3,4,5,6,7,8};
  int sum = sum_arr(cookies, ARRSIZE);
  cout << "Total cookies eaten "  << sum;

  return 0;
}

int sum_arr(int arr[], int size) {
  int total = 0;
  for (int i = 0; i < size; i++)
    total += arr[i];
  return total;
}
