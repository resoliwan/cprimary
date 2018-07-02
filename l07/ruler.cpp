#include <iostream>
#include <cmath>
using namespace std;


int calcuate_ruler_length(int r);
void fill_ruler(int a[], int length, int range);
void recur_fill_center(int a[], int start, int end, int range);
void print(const int a[], int size);
void print_ruler(const int a[], int length, int range);

int main() {
  int range;
  int length;
  cout << "Enter the range of ruler bigger than 2: ";
  cin >> range;
  if (range < 0) {
    cout << "Should range smaller than 2" << endl;
    return 1;
  }

  length = calcuate_ruler_length(range);
  cout << "Range: " << range << " , Length: " << length;

  int *ruler = new int[length];
  fill_ruler(ruler, length, range);
  print(ruler, length);
  print_ruler(ruler, length, range);

  return 0;
}

int calcuate_ruler_length(int r) {
  int length = 3;
  for (int i = 2; i < r; i++) {
    length = length * 2 - 1;
  }
  return length;
}

void fill_ruler(int a[], int length, int range) {
  a[0] = a[length - 1] = range;
  recur_fill_center(a, 0, length - 1, range);
}

void recur_fill_center(int a[], int s, int e, int val) {
  // cout << endl << "s: " << s << " e: " << e << endl;
  if (e - s < 2) return;
  int m = (s + e) / 2;
  // cout   << "m: " << m<< endl;
  a[m] = --val;
  recur_fill_center(a, s, m, val);
  recur_fill_center(a, m, e, val);
}

void print(const int a[], int size) {
  cout  << "{ ";
  for (int i = 0; i < size; i++) 
    cout << a[i] << ", ";

  cout << " }" << endl;; 
}

void print_ruler(const int a[], int length, int range) {
  for (int r = range; r > 0; r--) {
    for (int i = 0; i < length; i++){
      if (a[i] - r > -1)
        cout << "|";
       else
        cout << " ";
    }
    cout << endl;
  }
}
