#include<iostream>

long double probablilty(int cards, int picks);

using namespace std;
int main() {
  int cards;
  int picks;
  cout << "Enter the total number of game cards and the number of picks allowed: " << endl;

  while ((cin >> cards >>  picks) && cards >= picks)   {
    long double result = probablilty(cards, picks);
    cout << "You have one chane in " << result << " of winning." << endl;
    cout << "Next two numbers (q to quit): ";
  }

  return 0;
}

long double probablilty(int cards, int picks) {
  int c;
  int p;
  long double result = 1.0;
  for (c = cards, p = picks; p > 0; c--, p--){
    cout << "c: " << c;
    cout << " p: " << p;
    result = result * (c / p);
  }
  cout << "result: " << result;
  return 1 / result;
}
