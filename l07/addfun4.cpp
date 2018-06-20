#include<iostream>

int sum_arr(const int *begin,const int *end);

int main() {
  using namespace std;
  int cookies[8] = {1,2,3,4,5,6,7,8};
  cout << "Total cookies eaten " << sum_arr(cookies, cookies + 8) << endl;
  cout << "First three eaters ate " << sum_arr(cookies, cookies + 3) << endl;
  cout << "Last four eaters ate " << sum_arr(cookies + 4, cookies + 8) << endl;

  return 0;
}

int sum_arr(const int *begin,const int *end) {
  const int *pt;
  int total = 0;
  for (pt = begin; pt != end; pt++)
    total += *pt;

  return total;
}
