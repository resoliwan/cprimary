#include <iostream>
#include <cmath>

struct rect {
  double x;
  double y;
};

struct polar {
  double distance;
  double angle;
};

void rect_to_polar(const rect *r, polar *p);
void show_polar(const polar *p);

int main() {
  using namespace std;
  rect r;
  polar p;
  cout << "Enter two numbers: ";
  while (cin >> r.x >> r.y) {
    rect_to_polar(&r, &p);
    show_polar(&p);
    cout << "Enter Next two number (q to quit): ";
  }

  return 0;
}

void rect_to_polar(const rect *r, polar *p) {
  using namespace std;
  const double Radian_to_angle = 57.29577951;
  p->distance = sqrt(r->x * r->x + r->y * r->y);
  p->angle = atan2(r->y, r->x) * Radian_to_angle;
}

void show_polar(const polar *p) {
  using namespace std;
  cout << "distance: " << p->distance << " , angle: " << p->angle << endl;
}
