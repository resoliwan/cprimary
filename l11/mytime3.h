#ifndef MYTIME2_H_
#define MYTIME2_H_

#include <ostream>

class Time 
{
private:
  int hours;
  int minutes;
public:
  Time();
  Time(int h, int m = 0);
  void AddMin(int m);
  void AddHr(int h);
  void Reset(int h = 0, int m = 0);
  Time operator+(const Time & t) const;
  Time operator-(const Time & t) const;
  Time operator*(double mult) const;
  friend Time operator*(double m, Time & t)
  { return t * m; };
  friend std::ostream & operator<<(std::ostream & os, Time & t);
};

#endif
