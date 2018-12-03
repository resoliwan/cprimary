#include <iostream>
#include <functional>
#include <vector>
#include <iterator>

void show(int & i) { 
    std::cout.width(6);
    std::cout << i << " "; 
};

int main(void)
{
    using namespace std;

    int vals1[3] = {0, 1, 2};
    int vals2[3] = {10, 11, 12};

    vector<int> gr8(vals1, vals1 + 3);
    vector<int> m8(vals2, vals2 + 3);
    vector<int> sum(3, 0);

    ostream_iterator<int> oiter(cout, " ");
    cout << "oiter: ";
    transform(gr8.begin(), gr8.end(), sum.begin(), oiter, plus<int>());
    cout << endl;

    cout << "sum: ";
    transform(gr8.begin(), gr8.end(), sum.begin(), sum.begin(), plus<int>());
    for_each(sum.begin(), sum.end(), show);
    cout << endl;

    cout << "sum: ";
    transform(gr8.begin(), gr8.end(), oiter, bind1st(plus<int>(), 2.5));
    for_each(sum.begin(), sum.end(), show);
    cout << endl;


    cout << endl;
    return 0;
}
// clang++ l16/funadap.cpp && ./a.out
