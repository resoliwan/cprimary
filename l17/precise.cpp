#include <iostream>

int main(void)
{
    using namespace std;
    float p1 = 12345.12345;
    std::cout << p1 << std::endl;
    float p2 = 0.123456;
    std::cout << p2 << std::endl;
    float p3 = 12;
    std::cout << p3 << std::endl;

    cout << endl << "precisiosn : 2" << endl;
    cout.precision(2);
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
        

    cout << endl << "precisiosn : 1" << endl;
    cout.precision(1);
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;


    cout << endl << "precisiosn : 7" << endl;
    cout.precision(7);
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;



    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/precise.cpp && ./a.out
