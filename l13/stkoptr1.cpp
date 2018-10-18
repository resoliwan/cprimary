#include <istream>
#include <cstdlib>
#include <ctime>
#include "stackp1.h"

using namespace std;

const int ARRSIZE = 5;

int main()
{
  srand(time(0));

  char * inArr[ARRSIZE] = {"A", "B", "C", "D", "E"};
  char * outArr[ARRSIZE];
  cout << "Enter the stack size: ";
  int stacksize;
  cin >> stacksize;
  Stack<char *> st(stacksize);
  int nextIn = 0;
  int processed = 0;

  while (processed < ARRSIZE)
  {
    if(st.isempty()) 
      st.push(inArr[nextIn++]);
    else if (st.isfull())
      st.pop(outArr[processed++]);
    else
    {
      if (rand() % 2 && nextIn < ARRSIZE) 
        st.push(inArr[nextIn++]);
      else
        st.pop(outArr[processed++]);
    }
  }

  for (int i = 0; i < ARRSIZE; ++i) {
    cout << outArr[i] << endl;
  };

  return 0;
}
