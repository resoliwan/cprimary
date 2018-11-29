int z_global = 11;
int x_global_uninit;
static int s_x_global_uninit;

static int y_global_init = 2;

extern int x_global_init;

int fn_a(int x, int y)
{
  return (x+y);
}

int fn_b(int x, int y);

int main(int argc, char *argv[])
{
  const char *message = "Hello, world";
  z_global = fn_b(y_global_init, x_global_init);

  return fn_a(x_global_uninit, s_x_global_uninit);
}

