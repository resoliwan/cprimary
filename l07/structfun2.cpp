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

void rect_to_polar(const rect *r, polar *p);
void show_polar(const polar *p);


int main() {
  using namespace std;
  rect r;
  polar p; 

  cout << "Enter the x and y values: ";
  while (cin >> r.x >> r.y) {
    rect_to_polar(&r, &p);
    show_polar(&p);
    cout << "Next two numbers (q to quit): ";
  }

  return 0;
}

void rect_to_polar(const rect *r, polar *p) {
  using namespace std;
  const double Radian_to_angle = 57.29577951;
  p->angle = atan2(r->y, r->x) * Radian_to_angle; 
  p->distance = sqrt(r->x * r->x + r->y * r->y);
}

void show_polar(const polar *p) {
  using namespace std;
  cout << "distance = " << (p->distance) << " , angle: " << (p->angle) << endl;
}
