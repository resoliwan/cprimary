#include <iostream>

int main(void)
{
    using namespace std;
    int vals[3] = {1, 100, 1000};
    for (int i = 0; i < 3; ++i) {
        cout.width(5);
        cout << i << ": ";
        cout.width(8);
        cout << vals[i] << endl;
    }

    cout.fill('*');
    for (int i = 0; i < 3; ++i) {
        cout.width(5);
        cout << i << ": ";
        cout.width(8);
        cout << vals[i] << endl;
    }

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/width.cpp && ./a.out
