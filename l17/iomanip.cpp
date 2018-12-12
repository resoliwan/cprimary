#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
    using namespace std;

    cout << fixed << right;
    cout << setw(6) << "N" 
            << setw(20) << "square root" 
            << setw(20) << "forth root" << endl;

    double root;
    for (int i = 10; i <= 100; i += 10) {
        root = sqrt(i);
        cout << setw(6) << setfill('.') << i << setfill(' ') 
                << setw(20) << setprecision(3) << root 
                << setw(20) << setprecision(4) << sqrt(root) << endl;
    }

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/iomanip.cpp && ./a.out
