#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>

int main(void)
{
    using namespace std;
    const int SIZE = 6;
    string str1[SIZE] = {"a", "b", "c", "d", "e", "a" };
    string str2[SIZE] = {"Aa", "Ab", "Ac", "Ad", "Ae", "a"};

    set<string> A(str1, str1 + 6);
    set<string> B(str2, str2 + 6);

    ostream_iterator<string> outiter(cout, " ");
    cout << "A: ";
    copy(A.begin(), A.end(), outiter);
    cout << endl;

    cout << "B: ";
    copy(B.begin(), B.end(), outiter);
    cout << endl;

    cout << "Union of A and B: ";
    set_union(A.begin(), A.end(), B.begin(), B.end(), outiter);
    cout << endl;

    cout << "Intersetction of A and B: ";
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), outiter);
    cout << endl;

    cout << "Difference of A and B: ";
    set_difference(A.begin(), A.end(), B.begin(), B.end(), outiter);
    cout << endl;

    set<string> C;
    copy(A.begin(), A.end(), std::insert_iterator<set<string> >(C, C.begin()));
    copy(B.begin(), B.end(), std::insert_iterator<set<string> >(C, C.begin()));

    cout << "C: ";
    copy(C.begin(), C.end(), outiter);
    cout << endl;

    cout << "Showing a range: ";
    copy(C.lower_bound("b"), C.upper_bound("d"), outiter);
    cout << endl;

    return 0;
}
