#include<iostream>

struct antarctica_years_end 
{
  int year;
};

int main() 
{
  using namespace std;
  antarctica_years_end s01, s02, s03;
  s01.year = 1;
  antarctica_years_end * pa = &s02;
  pa->year = 2;

  antarctica_years_end trio[3];
  trio[0].year = 3;
  (trio+1)->year = 4;

  const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
  cout << arp[0]->year << endl;

  const antarctica_years_end ** ppa = arp;

  cout << (*ppa)->year << endl;
  cout << (*(ppa+1))->year << endl;

  return 0;
}
