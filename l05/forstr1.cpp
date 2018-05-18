#include<iostream>
#include<string>

int main() {
  using namespace std;
  cout << "Enter the string: ";
  string word;
  cin >> word;

  for (int i = word.size(); i >= 0; i--)
    cout << word[i];

  cout << endl << "Bye ." << endl;

  return 0;
}
