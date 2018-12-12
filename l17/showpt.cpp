#include <iostream>

int main(void)
{
    using namespace std;
    cout.setf(ios_base::showpoint);
    float p1 = 12345.12345;
    std::cout << p1 << std::endl;
    float p2 = 0.123456;
    std::cout << p2 << std::endl;
    float p3 = 12;
    std::cout << p3 << std::endl;

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/showpt.cpp && ./a.out
