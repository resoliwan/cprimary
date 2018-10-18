#include "workermi.h"
#include <iostream>

using namespace std;

Worker::~Worker() {};

void Worker::Get()
{
  cout << "Enter worker's name: ";
  getline(cin, fullname);
  cout << "Enter worker's id: ";
  cin >> id;
  while (cin.get() != '\n')
    continue;
}

void Worker::Set() 
{
  Get();
}

void Worker::Data() const
{
  cout << "Name: " << fullname;
  cout << ", id: " << id;
}

void Worker::Show() const 
{
  Data();
}

void Waiter::Get() 
{
  cout << "Enter waiter's panache rating: ";
  cin >> panache;
  while (cin.get() != '\n')
    continue;
}

void Waiter::Set() 
{
  Worker::Get();
  Get();
}

void Waiter::Data() const 
{
  cout << ", Panache rating: " << panache << "\n";
}

void Waiter::Show() const 
{
  Worker::Data();
  Data();
}

char * Singer::pv[] =  {"other", "alto", "cotralto"};

void Singer::Get() 
{
  cout << "Enter the number for singer's vocal range: ";
  cin >> voice;
  while (cin.get() != '\n')
    continue;
}
void Singer::Set() 
{
  Worker::Get();
  Get();
}

void Singer::Data() const 
{
  cout << ", Vocal range: " << pv[voice];
}

void Singer::Show() const 
{
  Worker::Data();
  Data();
}

void SingingWaiter::Data() const {
  Singer::Data();
  Waiter::Data();
}

void SingingWaiter::Show() const {
  Worker::Data();
  Data();
}

void SingingWaiter::Get() {
  Singer::Get();
  Waiter::Get();
}

void SingingWaiter::Set() {
  Worker::Get();
  Get();
}
