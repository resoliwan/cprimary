#include <iostream>
#include "stringbad.h"
using std::cout;

void callbyreference(Stringbad & s);
void callbyvalue(Stringbad s);

int main()
{
  {
    cout << "Starting an inner block.\n";
    Stringbad a = "a";
    Stringbad b("b");
    Stringbad c("c");

    callbyreference(a);
    cout << a << "\n";
    callbyvalue(b);
    cout << b << "\n";
    cout << "Initialize one object to another\n";
    // copy constructor is used when create new object and initialed to be an existing object of same kind
    // or call by value or return by value or making temporary object.
    Stringbad d = c; // a will be copyed to d
    cout << "Assing one object to another\n";
    Stringbad e; //e is consturted with defult constructer c++;
    e = c; //a will be copyed to e
  }

  return 0;
}

void callbyreference(Stringbad & s)
{
  cout << "call by reference\n";
  cout << s << "\n";
}
// Why a is not created?
void callbyvalue(Stringbad s)
{
  cout << "Call by value\n";
  cout << s << "\n";
}
