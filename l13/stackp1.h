#ifndef STACHTP_H_
#define STACHTP_H_ 
#include <iostream>

using namespace std;

template <typename Type>
class Stack
{
public:
  Stack (int s = 1);
  Stack (const Stack & s);
  ~Stack () { delete [] items; };
  bool isempty() const { return top == 0; };
  bool isfull() const { return top == stacksize; };
  bool push(const Type & i);
  bool pop(Type & i);
  Stack & operator=(const Stack & s);
private:
  enum {MAX = 10};
  Type * items;
  int stacksize;
  int top;
};


template <typename Type>
Stack<Type>::Stack(int s): top(0), stacksize(s)
{
  items = new Type[stacksize];
}

template <typename Type>
Stack<Type>::Stack(const Stack & s)
{
  top = s.top;
  stacksize = s.stacksize;
  items = new Type[stacksize];
  for (int i = 0; i < stacksize; ++i)
    items[i] = s.items[i];
}


template <typename Type>
bool Stack<Type>::push(const Type & i)
{
  if (top < stacksize)
  {
    items[top++] = i;
    return true;
  }
  else
    return false;
}

template <typename Type>
bool Stack<Type>::pop(Type & i)
{
  if (top > 0)
  {
    i = items[--top];
    return true;
  }
  else
    return false;
}

template <typename Type>
Stack<Type> & Stack<Type>::operator=(const Stack<Type> & s)
{
  if (this == &s)
    return *this;
  delete [] items;

  top = s.top;
  stacksize = s.stacksize;
  items = new Type[stacksize];
  for (int i = 0; i < stacksize; ++i) 
    items[i] = s.items[i];
  return *this;
}

#endif
