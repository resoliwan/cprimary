#include <iostream>
#include <cmath>

int main(void)
{
    using namespace std;
    double vals[5] = {1, 2.2, 3.33, 4.444, 5.555};
    std::cout << sqrt(4) << std::endl;
    cout.setf(ios::left, ios::adjustfield);
    cout.setf(ios::showpos);
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed, ios::floatfield);

    ios::fmtflags old = cout.setf(ios::scientific, ios::floatfield);
    cout.precision(4);
    cout << "Left justification" << endl;
    for (int i = 0; i < 5; ++i) {
        cout.width(5);
        cout << i << "|";
        cout.width(15);
        cout << sqrt(vals[i]) << "|" << endl;
    }

    cout.setf(old, ios::floatfield);
    cout.setf(ios::internal, ios::adjustfield);
    cout.precision(2);
    cout << "Internal justification" << endl;
    for (int i = 0; i < 5; ++i) {
        cout.width(5);
        cout << i << "|";
        cout.width(15);
        cout << sqrt(vals[i]) << "|" << endl;
    }

    cout.setf(ios::right, ios::adjustfield);
    cout.precision(4);
    cout << "Right justification" << endl;
    for (int i = 0; i < 5; ++i) {
        cout.width(5);
        cout << i << "|";
        cout.width(15);
        cout << sqrt(vals[i]) << "|" << endl;
    }

    cout << internal;


    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/setf2.cpp && ./a.out
