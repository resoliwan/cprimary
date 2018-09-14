#include <iostream>
#include <cstring>

#ifndef MY_QUEUE_H_
#define MY_QUEUE_H_

class Customer 
{
private:
  long arrive;
  int processtime;
public:
  Customer() { arrive = processtime = 0; };
  void set(long when);
  long when() const { return arrive; };
  int ptime() const { return processtime; };
};

typedef Customer Item;

class Queue
{
private: 
  Queue(const Queue & q) : qsize(0) {};
  Queue & operator=(const Queue & q) { return *this; };

  struct Node { 
    Item item; 
    Node * next;
  };
  enum {Q_SIZE = 10};
  Node * front;
  Node * rear;
  int items;
  const int qsize;
public:
  Queue(int s = Q_SIZE);
  ~Queue();

  bool isempty() const { return items < 1; };
  bool isfull() const { return items >= Q_SIZE; };
  int queuecount() const { return items; };
  bool enqueue(const Item & item);
  bool dequeue(Item & item);
};

#endif
