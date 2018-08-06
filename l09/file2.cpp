#include <iostream>
#include <cmath>
#include "coordin.h"
using namespace std;

polar rect_to_polar(rect r) {
  const double Radian_to_angle = 57.29577951;
  polar p;
  p.angle = atan2(r.y, r.x) * Radian_to_angle; 
  p.distance = sqrt(r.x * r.x + r.y * r.y);
  return p;
}

void show_polar(polar p) {
  cout << "distance = " << p.distance << " , angle: " << p.angle << endl;
}
