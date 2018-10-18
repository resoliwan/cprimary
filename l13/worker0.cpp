#include "worker0.h"
#include <iostream>

using namespace std;

Worker::~Worker() {};

void Worker::Set() 
{
  cout << "Enter worker's name: ";
  getline(cin, fullname);
  cout << "Enter worker's id: ";
  cin >> id;
  while (cin.get() != '\n')
    continue;
}

void Worker::Show() const 
{
  cout << "Name: " << fullname;
  cout << ", id: " << id;
}

void Waiter::Set() 
{
  Worker::Set();
  cout << "Enter waiter's panache rating: ";
  cin >> panache;
  while (cin.get() != '\n')
    continue;
}

void Waiter::Show() const 
{
  Worker::Show();
  cout << ", Panache rating: " << panache << "\n";
}

char * Singer::pv[] =  {"other", "alto", "cotralto"};

void Singer::Set() 
{
  Worker::Set();
  cout << "Enter the number for singer's vocal range: ";
  cin >> voice;
  while (cin.get() != '\n')
    continue;
}

void Singer::Show() const 
{
  Worker::Show();
  cout << ", Vocal range: " << pv[voice] << endl;
}
