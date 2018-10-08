#include "studentc.h"
using namespace std;

const int SIZE = 1;
const int QUIZ_SIZE = 5;

int main()
{
  Student as[SIZE] = {
    Student(QUIZ_SIZE)
    // Student(QUIZ_SIZE)
    // Student(QUIZ_SIZE)
  };

  int i;

  for (i = 0; i < SIZE; ++i) 
  {
    cout << "Please enter the studnent's name: ";
    cin >> as[i];
    cout << "Please enter 5 quiz scores\n";
    int j;
    for (j = 0; j < QUIZ_SIZE; ++j) {
      cin >> as[i][j];
    }
  }
  
  for (i = 0; i < SIZE; ++i) {
    cout << as[i];
  }

  
  return 0;
}
