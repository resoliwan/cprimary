#include <iostream>
using namespace std;

void oil();

int main() {
  int texas = 1;
  cout << "main() texas: " << texas << " &texas: " << &texas << endl;
  oil();
  cout << "main() after oil texas: " << texas << " &texas: " << &texas << endl;

  return 0;
}


void oil() {
  int texas = 2;
  cout << "oil() texas: " << texas << " &texas: " << &texas << endl;
  {
    cout << "oil() block before define texas: " << texas << " &texas: " << &texas << endl;
    int texas = 3;
    cout << "oil() block after define texas: " << texas << " &texas: " << &texas << endl;
  }
  cout << "oil() post black texas: " << texas << " &texas: " << &texas << endl;
}

