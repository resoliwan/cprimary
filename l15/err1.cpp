int x_global = 0;

class Demo {
public:
  ~Demo() { x_global = 777;}
};

void call1();

int main(void)
{
  int hello;
  try 
  {
    call1();
  }
  catch (const char * err)
  {
    hello = 1000;
  }
  
  return 0;
}

void call1()
{
  Demo d;
  if (x_global)
    throw "Error statement";
  else 
    x_global = 10;
}

