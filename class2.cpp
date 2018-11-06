class Cls {
public:
  int a;
  int hello() { return a; }
};


int main(void)
{
  Cls cl1;
  cl1.a = 1;
  cl1.hello();

  // Cls cl2;
  // cl2.a = 2;
  // cl2.hello();
  return 0;
}


