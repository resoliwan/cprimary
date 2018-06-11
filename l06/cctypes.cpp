#include<iostream>
#include<cctype>

int main() {
  using namespace std;
  cout << "Enter the text to analysis, and type @ to terminate input: ";
  char ch;
  int i = 0;
  int chars = 0;
  int whitespaces = 0;
  int digits = 0;
  int punct = 0;
  int others = 0;

  cin.get(ch);
  while(ch != '@') {
    cout << ch;
    if (isalpha(ch)) 
      ++chars;
    else if (isspace(ch))
      ++whitespaces;
    else if (isdigit(ch))
      ++digits;
    else if (ispunct(ch))
      ++punct;
    else 
      ++others;
    
    ++i;
    cin.get(ch);
  }

  cout << " chars: " << chars 
       << " whitespaces: " << whitespaces 
       << " digis: " << digits
       << " punct: " << punct
       << " others: " << others <<endl;

  return 0;
}

