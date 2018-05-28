#include<iostream>
#include<string>

// Enter a word: stressed 
// desserts 
// Done

int main() {
  using namespace std;
  string word;
  char temp;

  cout << "Enter a word: ";
  cin >> word;

  for (int j = 0, i = word.size() - 1; j < i; ++j, --i) {
    temp = word[i];
    word[i] = word[j];
    word[j] = temp;
  }

  cout << word << "\nDone \n" << endl;

  return 0;
}
