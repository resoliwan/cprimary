#include <iostream>

// std::string decToBinaryString(int num) {
//     std::string binary = "";
//     while (num > 0) {
//         std::cout << num%2 << std::endl;
//         binary.push_back(num % 2);
//         num = num / 2;
//     }
//
//     std::cout << binary << std::endl;
//
//     return binary;
// }
//
// int main(void)
// {
//     using namespace std;
//     std::cout << decToBinaryString(0) << std::endl;
//     std::cout << decToBinaryString(2) << std::endl;
//     std::cout << decToBinaryString(3) << std::endl;
//
//     return 0;
// }
// clang++ -std=c++11 -Wno-c++11-extensions l17/binary.cpp && ./a.out
//
#include <iostream>

int main(void)
{
    using namespace std;
    string str = "";
    str += to_string(0);
    std::bitset<8> bit(8);
    std::cout << bit << std::endl;
    std::cout << str << std::endl;
    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/binary.cpp && ./a.out
