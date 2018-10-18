#ifndef WORKER0_H_
#define WORKER0_H_

#include <string>

class Worker
{
public:
  Worker(): fullname("no one"), id(0L) {};
  Worker(const std::string & s, long n): fullname(s), id(n) {};
  virtual ~Worker() = 0;
  virtual void Set();
  virtual void Show() const;
protected:
  virtual void Get();
  virtual void Data() const;
private:
  std::string fullname;
  long id;
};

class Waiter : public virtual Worker
{
public:
  Waiter(): Worker(), panache(0) {};
  Waiter(const std::string & s, long n, int p = 0): Worker(s, n), panache(p) {};
  Waiter(const Worker & wk, int p = 0): Worker(wk), panache(p) {};
  void Set();
  void Show() const;
protected:
  virtual void Get();
  virtual void Data() const;
private:
  int panache;
};

class Singer: public virtual Worker
{
public:
  Singer(): Worker(), voice(other) {};
  Singer(const std::string & s, long n, int v = 0): Worker(s, n), voice(v) {};
  Singer(const Worker & wk, int v = 0): Worker(wk), voice(v) {};
  void Set();
  void Show() const;
protected:
  enum {other, alto, cotralto};
  enum {Vtypes = 3};
  virtual void Get();
  virtual void Data() const;
private:
  static char *pv[Vtypes];
  int voice;
};

class SingingWaiter: public Singer, public Waiter
{
public:
  SingingWaiter () {};
  SingingWaiter (const std::string & s, long n, int v = 0, int p = 0): Worker(s, n), Singer(s, n, v), Waiter(s, n, p) {};
  SingingWaiter (const Worker & wk, int v = 0, int p = 0): Worker(wk), Singer(wk, v), Waiter(wk, p) {};
  // SingingWaiter (const Waiter & wt, int v = 0): Worker(wt), Singer(wt, v), Waiter(wt) {};
  // SingingWaiter (const Singer & wt, int p = 0): Worker(wt), Singer(wt), Waiter(wt, p) {};
  virtual ~SingingWaiter () {};
  void Set();
  void Show() const;
protected:
  virtual void Get();
  virtual void Data() const;
};
#endif
