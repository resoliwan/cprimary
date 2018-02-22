#include <iostream>
#include <climits>

int main()
{
  using namespace std;
  short signShort = 10;
  unsigned short unShort = 0;

  for (unShort; unShort < signShort; unShort++) {

    cout << unShort << endl;
  }

  short signShort1 = 0;
  unsigned short unShort1 = 10;
  for (signShort1; signShort1 < unShort1; signShort1++) {
    cout << signShort1 << endl;
  }
  return 0;
}
