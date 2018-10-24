#include "tv.h"
#include <iostream>

using namespace std;

int main(void)
{
  Tv tv1;
  cout << "Tv1: " << endl;
  tv1.settings();
  tv1.onoff();
  tv1.chanup();
  tv1.settings();

  Remote r1;
  r1.set_chan(tv1, 100);
  r1.volup(tv1);
  r1.volup(tv1);
  tv1.settings();

  Tv t2(Tv::On);
  t2.set_mode();
  r1.set_chan(t2, 2);
  cout << "Tv2: " << endl;
  t2.settings();

  return 0;
}
