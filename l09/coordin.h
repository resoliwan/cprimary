#ifndef COORDIN_H_
#define COORDIN_H_

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


#endif
