#include <iostream>

int main(void)
{
    using namespace std;
    cout.setf(ios_base::showpos);
    cout << 17 << endl;

    cout << std::hex << 15 << endl;
    cout.setf(ios_base::uppercase);
    cout << 15 << endl;
    cout.setf(ios_base::showbase);
    cout << 17 << endl;

    cout << std::dec;
    cout << "ture: " << true << endl;

    cout.setf(ios_base::boolalpha);
    cout << "ture: " << true << endl;


    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/setf.cpp && ./a.out
