#include "worker0.h"

int main()
{
  Waiter w1("w1", 1, 1);
  Singer s2("s2", 2, 1);

  Waiter w3;
  Singer s4;

  Worker * wa[] = {&w1, &s2, &w3, &s4};

  int i;
  for (i = 2; i < 4; ++i) {
    wa[i]->Set();
  }

  for (i = 0; i < 4; ++i) {
    wa[i]->Show();
  }

  return 0;
}
