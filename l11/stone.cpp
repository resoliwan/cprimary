#import <iostream>
#import "stonewt.h"

void display(const Stonewt & st);

int main()
{
  using std::cout;

  Stonewt a = 275;
  Stonewt b(285.7);
  Stonewt c(21, 8);

  cout << "a: ";
  a.show_lbs();
  cout << "b: ";
  b.show_lbs();
  cout << "c: ";
  c.show_stn();

  display(c);
  display(200);

  int d = (int) a;
  cout << "d: " << d << "\n";
  double e = (double) a;
  cout << "e: " << e << "\n";

  return 0;
}

void display(const Stonewt & st)
{
  st.show_lbs();
}
