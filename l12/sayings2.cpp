#include <iostream>
#include <ctime>
#include <cstdlib>
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
    int shortest = 0;
    int first = 0;

    cout << "Here are you sayings: \n";
    for (i = 0; i < total; i++)
      cout << sayings[i][0] << ": " << sayings[i] << endl;

    for (i = 1; i < total; i++)
    {
      if (sayings[shortest].length() > sayings[i].length())
        shortest = i;
      if (sayings[first] > sayings[i])
        first = i;
    }

    cout << "Shortest saying:\n" << sayings[shortest] << endl;
    cout << "First alphbetically:\n" << sayings[first] << endl;

    srand(time(0));
    int choice = rand() % total;
    String * favorite = new String(sayings[choice]);
    cout << "My favorite saying:\n" << *favorite << endl;
    delete favorite;
  }

  cout << "This program used " << String::HowMany() << " String objects. Bye.\n";

  return 0;
}

