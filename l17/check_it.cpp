#include <iostream>

int main(void)
{
    using namespace std;

    // cout << "Enter numbers: " << endl;
    // int number;
    // if (cin >> number) {
    //     std::cout << number << std::endl;
    // } else {
    //     std::cout << "Input is not a number" << std::endl;
    // }
    //
    //
    char arr[20];
    int num;
    cout << "Enter number;char" << endl;
    cin >> num >> arr;


    cout << "arr: " << arr << endl;
    cout << "num: " << num << endl;
    // cout << "ch: " << ch << endl;

    
    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/check_it.cpp && ./a.out
