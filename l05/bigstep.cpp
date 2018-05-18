#include<iostream>

int main() {
  // using namespace std;
  using std::cout;
  using std::cin;
  using std::endl;

  int by;
  cout << "Enter an Integer: ";
  cin >> by;
  cout << "Counting by " << by << "s:" << endl;

  for (int i = 0; i < 100; i = i + by)
    cout << i << endl;

  return 0;
}
