int z_global = 11;

static int y_global_init = 2;

extern int x_global_init;

int fn_a(int x, int y)
{
  return (x+y);
}

int main(int argc, char *argv[])
{
  const char *message = "Hello, world";
  return fn_a(11, 12);
}

