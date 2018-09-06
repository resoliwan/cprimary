#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
private:
  enum {Lbs_per_stn = 14};
  int stone;
  double pds_left; //fractional pounds
  double pounds;
public:
  Stonewt(double lbs);
  Stonewt(int stn, double lbs);
  Stonewt();
  ~Stonewt();
  void show_lbs() const;
  void show_stn() const;
  explicit operator int() const;
  explicit operator double() const;
};

#endif

