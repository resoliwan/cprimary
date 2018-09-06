#include <iostream>
#include "stonewt.h"


Stonewt::Stonewt(double lbs)
{
  pounds = lbs;
  stone = lbs / Lbs_per_stn;
  pds_left = (int) lbs % Lbs_per_stn + lbs - (int) lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
  pounds = stn * Lbs_per_stn + lbs;
  stone = pounds / Lbs_per_stn;
  pds_left = (int) pounds % Lbs_per_stn + pounds - (int) pounds;
}

Stonewt::Stonewt()
{
  pounds = stone = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::show_lbs() const
{
  std::cout << "pounds: " << pounds << "\n";
}

void Stonewt::show_stn() const
{
  std::cout << "stone: " << stone << ", pounds: " << pds_left << "\n";
}

Stonewt::operator int() const
{
  return int (pounds + 0.5);
}

Stonewt::operator double() const
{
  return pounds;
}

