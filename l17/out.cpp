#include <iostream>

int main(void)
{
    using namespace std;
    // string temp;
    // cin >> temp;
    // cout << temp << endl;

    char amount[20] = "dozen";
    cout << amount << endl;
    cout << (void *)amount << endl;
    cout << &amount << endl;

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/out.cpp && ./a.out
