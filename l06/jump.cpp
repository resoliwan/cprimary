#include<iostream>
#include<cctype>
const int ArSize = 80;

int main() {
  using namespace std;
  char line[ArSize] = {0};
  cout << "Enter a line of text\n";
  cin.get(line, ArSize);
  cout << "Complete line\n";
  cout << line;

  int whitespaces = 0;
  cout << "Line throguh first period\n";
  for (int i = 0; i < ArSize; ++i){
    cout << line[i];
    if (line[i] == '.')
      break;
    if (!isspace(line[i]))
      continue;
    ++whitespaces;
  }


  cout << endl << whitespaces << " space\n";
  cout << "Done.\n";

  return 0;
}

