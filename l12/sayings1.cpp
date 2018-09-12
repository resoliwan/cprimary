#include <iostream>
#include "string.h"

using namespace std;

const int ArSize = 10;

int main()
{
  String name;
  cout << "Hi, what's your name?\n";
  cin >> name;
  String sayings[ArSize];
  cout << name << ", please enter up to 10 short strings <empty line to quit>:\n";
  int i = 0;

  for (; i < ArSize; i++)
  {
    cout << (i + 1) << ": ";
    cin >> sayings[i];
    if (!cin)
      break;
  }

  int total = i;
  if (total > 0)
  {
    String * shortest = &sayings[0];
    String * first = &sayings[0];

    cout << "Here are you sayings: \n";
    for (i = 0; i < total; i++)
      cout << sayings[i][0] << ": " << sayings[i] << endl;

    for (i = 1; i < total; i++)
    {
      if (shortest->length() > sayings[i].length())
        shortest = &sayings[i];
      if (*first > sayings[i])
        first = &sayings[i];
    }

    // Why it display string when we pass it as pointer to String
    cout << "Shortest saying:\n" << *shortest << endl;
    cout << "First alphbetically:\n" << *first << endl;
  }

  cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
  return 0;
}

