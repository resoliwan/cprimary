#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

const int MAX = 10;

int main()
{
  using namespace std;
  using VECTOR::Vector;
  srand(time(0));
  double direction;
  double dstep = 1;
  Vector position(0, 0);
  Vector step;
  for (int i = 0; i < MAX; i++)
  {
    direction = rand() % 360;
    step.reset(dstep, direction, Vector::POL);
    position = position + step;
    position.rect_mode();
    std::cout << "i: " << i << " "<< position << " or ";
    position.polar_mode();
    std::cout << " "<< position << "\n";
  }

  return 0;
}
