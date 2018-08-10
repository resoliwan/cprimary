#include <iostream>
#include "11_namesp.h"

void other(void);
void another(void);

int main(void)
{
  using debts::Debt;
  Debt golf = { {"f_1", "l_1"}, 1};
  debts::showDebt(golf);
  another();
  other();

  return 0;
}

void other(void)
{
  using namespace debts;
  Debt two[2];
  for (int i = 0; i < 2; i++)
    getDebt(two[i]);

  for (int i = 0; i < 2; i++)
    showDebt(two[i]);

  std::cout << "total: " << sumDebts(two, 2) << std::endl;
}

void another(void)
{
  using pers::Person;
  Person test = { "L2", "F2" };
  pers::showPerson(test);
  std::cout << std::endl;
}
