#include <iostream>
#include "queue.h"
#include <iomanip> 

using namespace std;

bool newcustomers(double x);

const int MIN_PER_HR = 60;

int main() 
{
  int qsize = 0;
  int hours = 0;
  int perhour = 0;

  cout << "Enter maximum size of queue.\n";
  cin >> qsize;
  cout << "Enter the number of simulation hours.\n";
  cin >> hours;
  cout << "Enter the average number of customers per hour\n";
  cin >> perhour;

  Queue line(qsize);
  double min_per_cust = MIN_PER_HR / perhour;
  int minutes = hours * 60;
  bool newcustomer;
  int waittime = 0;

  Item c = Customer();
  int turnaways = 0;
  int acceptedcustomers = 0;
  int servedcustomers = 0;
  int aveqsize = 0;
  int totalwaittime = 0;

  for (int i = 0; i < minutes; i++)
  {
    newcustomer = newcustomers(min_per_cust);
    if (newcustomer) 
    {
      if (!line.isfull())
      {
        acceptedcustomers++;
        c.set(i);
        line.enqueue(c);
      }
      else
        turnaways++;
    }

    if (waittime < 1 && !line.isempty()) {
      line.dequeue(c);
      waittime = c.ptime();
      totalwaittime += i - c.when();
      servedcustomers++;
    }

    if (waittime > 0)
      waittime--;

    aveqsize = aveqsize + 1/(i + 1) * (line.queuecount() - aveqsize);
  }

  cout << "customers accepted: " << acceptedcustomers << endl;
  cout << "customers serverd: " << servedcustomers << endl;
  cout << "turn aways: " << turnaways << endl;
  cout << "\taverage queue size: " << aveqsize << endl;
  cout << "average wait time: " << totalwaittime << endl;

  cout << "done\n";

  return 0;
}

bool newcustomers(double x)
{
  return (std::rand() * x / RAND_MAX < 1);
}
