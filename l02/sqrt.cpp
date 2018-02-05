#include <iostream>
#include <cmath>

int main()
{
  using namespace std;

  double area;
  cout << "Enter the floor area, in squre feet, of your home: ";
  cin >> area;
  cout << area << endl;
  double side;
  side = sqrt(area);
  cout << "That's the equivalent of a squre " << side << " feet to the side." << endl; 
  cout << "How fascinating!";
  return 0;
}
