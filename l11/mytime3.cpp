#include <iostream>
#include "mytime3.h"

Time::Time()
{
  hours = minutes = 0;
}

Time::Time(int h, int m)
{
  hours = h;
  minutes = m;
}

void Time::AddMin(int m)
{
  minutes += m;
  hours += minutes / 60;
  minutes %= 60;
}

void Time::AddHr(int h)
{
  hours += h;
}

void Time::Reset(int h, int m)
{
  hours = h;
  minutes = m;
}

Time Time::operator+(const Time & t) const
{
  Time sum;
  sum.minutes = minutes + t.minutes;
  sum.hours = hours + t.hours + sum.minutes / 60;
  sum.minutes %= 60;
  return sum;
}

Time Time::operator-(const Time & t) const
{
  Time diff;
  int tot, tott;
  tot = hours * 60 + minutes;
  tott = t.hours * 60 + t.minutes;
  diff.hours = (tot - tott) / 60;
  diff.minutes = (tot - tott) % 60;
  return diff;
}

Time Time::operator*(double mult) const
{
  Time result;
  long totalmin = hours * mult * 60 + minutes * mult;
  result.hours = totalmin / 60;
  result.minutes = totalmin % 60;
  return result;
}

std::ostream & operator<<(std::ostream & os, Time & t)
{
  os << t.hours << " hours, " << t.minutes << " minutes.\n";
  return os;
}
