#include <iostream>
#include "queue.h"

Queue::~Queue()
{
  //  input:  f -> n2 -> n1 <- r 
  //          f -> n1 <- r 
  //  output: f -> null <- r
  Node * temp;
  while (front != nullptr)
  {
    temp = front;
    front = front->next;
    delete temp;
  }
}

Queue::Queue(int qs) : qsize(qs)
{
  front = rear = nullptr;
  items = 0;
}

bool Queue::enqueue(const Item & item)
{
  //1.When qeueu is empty
  //  input:  f -> null <- r, n
  //  output: f -> n <- r 
  //  create add
  //  set f to n
  //  set r to n
  //
  //2. Greater than one more node
  //  input:  f -> n1 <- r, n2
  //  output: f -> n2 -> n1 <- r 
  //  create add
  //  before = r
  //  set before.next to n2
  //  set r to n2
  //
  //How we create new strct
  //
  if (isfull())
    return false;
  
  Node * add = new Node;
  add->item = item;
  add->next = nullptr;

  if (front == nullptr) 
    front = add;
  else
    rear->next = add;

  rear = add;
  items++;
  return true;
}

bool Queue::dequeue(Item & item)
{
  //1. No node
  //  input:  f -> null <- r, np
  //  output: f -> null <- r 
  //
  //  isEmpty() return false;
  //
  //2. Greater than one more node
  //  input:  f -> n1 -> n2 <- r, np
  //  output: f -> n2 <- r , n1
  //
  //  set f to np
  //  f = f.next 
  
  if (isempty())
    return false;
 
  item = front->item;
  Node * temp = front;
  front = front->next;
  delete temp;

  if (items  ==0)
    rear = nullptr;

  items--;
  return true;
}

void Customer::set(long when) 
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
  };
