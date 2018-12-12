#include <iostream>

int main(void)
{
    using namespace std;
    double val = 1234567.67891234;
    cout << val << endl;

    double f3 = 2.3e-4;
    cout << f3 << endl;
    cout << f3 / 10 << endl;
    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/format.cpp && ./a.out
