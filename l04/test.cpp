#include<iostream>

int main() 
{
  using namespace std;
  int v1 = 1;

  int* p1 = &v1;
  int** ppa = &p1;

  cout << "&v1: " << &v1 << endl;
  cout << "p1: " << p1 << endl;
  cout << "&p1: " << &p1 << endl;
  cout << "ppa: " << ppa << endl;
  cout << "*ppa: " << *ppa << endl;


  return 0;
}
