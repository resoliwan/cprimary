#include <iostream>

int main(void)
{
    using namespace std;
    int n = 13;
    std::cout << "n: " << n << " (decimal)" << std::endl;
    std::cout << "n: " << hex << n << " (hex)" << std::endl;
    std::cout << "n: " << oct << n << " (oct)" << std::endl;
    dec(cout);
    std::cout << "n: " << n << " (dec)" << std::endl;
    cout << hex;
    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/manip.cpp && ./a.out
