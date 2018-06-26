#include <iostream>
#include <cmath>

struct rect {
  double x;
  double y;
};

struct polar {
  double angle;
  double distance;
};

polar rect_to_polar(rect r);
void show_polar(polar p);


int main() {
  using namespace std;
  rect r;
  polar p; 

  cout << "Enter the x and y values: ";
  while (cin >> r.x >> r.y) {
    rect_to_polar(r);
    show_polar(p);
    cout << "Next two numbers (q to quit): ";
  }

  return 0;
}

polar rect_to_polar(rect r) {
  using namespace std;
  const double Radian_to_angle = 57.29577951;
  polar p;
  p.angle = atan2(r.y, r.x) * Radian_to_angle; 
  p.distance = sqrt(r.x * r.x + r.y * r.y);
  return p;
}

void show_polar(polar p) {
  using namespace std;
  cout << "distance = " << p.distance << " , angle: " << p.angle << endl;
}
