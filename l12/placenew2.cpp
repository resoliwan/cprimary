#include <iostream>
#include <string>
#include <new>

using namespace std;

const int BUF = 500;

class JustTesting
{
private:
  string words;
  int number;
public:
  JustTesting(const string & s = "Just Testing", int n = 0) 
  { 
    words = s;
    number = n;
    cout << words << " constructed\n"; 
  }
  ~JustTesting() { cout << words << " destoryed\n"; }
  void Show() const { cout << words << ", " << number << endl;}
};

int main() 
{
  char * buffer = new char[BUF];

  JustTesting * p1, * p2;

  p1 = new (buffer) JustTesting;
  p2 = new JustTesting("Heap1", 20);

  cout << "Memory block address:\n";
  cout << "buffer: " << (void *) buffer << " heap: " << p2 << endl;

  cout << "Memory contents:\n";
  cout << p1 << ": ";
  p1->Show();
  cout << p2 << ": ";
  p2->Show();

  JustTesting * p3, * p4;
  p3 = new (buffer + sizeof(JustTesting)) JustTesting("Bad Idea", 6);
  p4 = new JustTesting("heap2", 10);

  cout << "Memory contents:\n";
  cout << p3 << ": ";
  p3->Show();
  cout << p4 << ": ";
  p4->Show();

  delete p2;
  delete p4;

  p1->~JustTesting();
  p3->~JustTesting();
  delete [] buffer;

  cout << "Done.\n";

  return 0;
}

