#ifndef STACHTP_H_
#define STACHTP_H_ 
#include <iostream>

template <class Type>
class Stack
{
public:
  Stack ();
  bool isemtpy() const;
  bool isfull() const;
  bool push(const Type & i);
  bool pop(Type & i);
  virtual ~Stack () {};
private:
  enum {MAX = 10};
  Type items[MAX];
  int top;
};

template <class Type>
Stack<Type>::Stack()
{
  top = 0;
}

template <class Type>
bool Stack<Type>::isemtpy() const
{
  return top == 0;
}

template <class Type>
bool Stack<Type>::isfull() const
{
  return top == MAX;
}

template <class Type>
bool Stack<Type>::push(const Type & i)
{
  if (top < MAX)
  {
    items[top++] = i;
    return true;
  }
  else
    return false;
}

template <class Type>
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
#endif
