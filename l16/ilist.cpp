#include <iostream>
#include <vector>
#include <initializer_list>

double sum(std::initializer_list<double> li);
double average(std::initializer_list<double> li);

int main(void)
{
    using namespace std;
    vector<double> vals1({1, 2, 3});
    vector<double> vals2 = {1, 2, 3};
    vector<double> valsi3 {1, 2, 3};
    vector<double> valsi4 {1.1, 2, 3};
    shared_ptr<double> pd {new double};

    cout << "List 1: sum = " << sum({2, 3, 4}) << ", ave = " << average({2, 3, 4}) << endl;
    std::initializer_list<double> l2 = {1, 2, 3, 4};
    cout << "List 2: sum = " << sum(l2) << ", ave = " << average(l2) << endl;
    return 0;
}
// clang++ -Wno-c++11-extensions -std=c++11 l16/ilist.cpp && ./a.out
//
double sum(std::initializer_list<double> li) {
    double total = 0;
    for (auto i : li) 
        total += i;
    return total;
};

double average(std::initializer_list<double> li) {
    double total = 0;
    for (auto p = li.begin();  p != li.end();  p++) 
        total += *p;

    return sum(li) / li.size();
};
