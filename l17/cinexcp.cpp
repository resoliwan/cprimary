#include <iostream>
#include <exception>

int main(void)
{
    using namespace std;
    cin.exceptions(ios_base::badbit | ios_base::failbit);
    std::bitset<4> except(cin.exceptions());
    cout << "except: " << except << endl;

    std::bitset<4> bit0(cin.rdstate());
    cout << "cin state: " << bit0 << endl;
    cout << "Enter a number: " << endl;
    int sum = 0;
    int input;
    try {
        while (cin >> input)
            sum += input;
    } catch(ios_base::failure & bf) {
        std::cout << bf.what() << std::endl;
        std::cout << "O! the Error!" << std::endl;
    }
    std::bitset<4> bit(cin.rdstate());
    cout << "After cin state: "<< bit << endl;

    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/cinexcp.cpp && ./a.out
