#include <iostream>
using namespace std;

void change(const int * i, int delta);

int main(void)
{
    int i = 1;
    const int ci = 1;

    cout << "i: " << i << " ci: " << ci << endl;
    change(&i, 10);
    change(&ci, 10);
    cout << "After change" << endl;
    cout << "i: " << i << " ci: " << ci << endl;
    return 0;
}

void change(const int * pi, int delta)
{
    int * pc;
    pc = const_cast<int *>(pi);
    *pc += delta;
}
