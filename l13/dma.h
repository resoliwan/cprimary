#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class BaseDMA 
{
private:
  char * label;
  int rating;
public:
  BaseDMA(const char * l = "null", int r = 0);
  BaseDMA(const BaseDMA & rs);
  virtual ~BaseDMA();
  BaseDMA & operator=(const BaseDMA & rs);
  friend std::ostream & operator<<(std::ostream & os, const BaseDMA & rs);
};

class LacksDMA: public BaseDMA
{
private:
  enum { COL_LEN = 40 };
  char color[COL_LEN];
public:
  LacksDMA(const char * c = "black", const char * l = "null", int r = 0);
  LacksDMA(const char * c, const BaseDMA & rs);
  friend std::ostream & operator<<(std::ostream & os, const LacksDMA & rs);
};

class HasDMA: public BaseDMA
{
private:
  char * style;
public:
  HasDMA(const char * s = "node", const char * l = "null", int r = 0);
  HasDMA(const char * s, const BaseDMA & rs);
  HasDMA(const HasDMA & rs);
  ~HasDMA();
  HasDMA & operator=(const HasDMA & rs);
  friend std::ostream & operator<<(std::ostream & os, const HasDMA & rs);
};
#endif
