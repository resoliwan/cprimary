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

  for (int i = 0, j = word.size() - 1; j < i; i++, j--) {
    temp = word[i];
    word[i] = word[j];
    word[j] = temp;
  }

  cout << word << "\nDone \n" << endl;

  return 0;
}
