#include <iostream>
using namespace std;

template <typename T> 
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);

struct debts {
  char name[50];
  double amount;
};

int main() {
  int things[6] = {1, 2, 3, 4, 5, 6};
  debts mr_E[3] = {
    {"a", 1},
    {"b", 2},
    {"c", 3}
  };
  double * pa[3];

  for (int i = 0; i < 3; i++)
    pa[i] = &mr_E[i].amount;

  ShowArray(things, 3);
  ShowArray(pa, 3);

  return 0;
}

template <typename T>
void ShowArray(T arr[], int n) {
  cout << "normal" << endl;
  for (int i = 0; i < n; i++) 
    cout << arr[i];
  cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n) {
  cout << "pointer" << endl;
  for (int i = 0; i < n; i++) 
    cout << *arr[i];
  cout << endl;
}
