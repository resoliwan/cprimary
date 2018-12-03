#include <iostream>
#include <algorithm>
#include <list>

template<class T>
class TooBig {
public:
    TooBig() {};
    TooBig(const T & l): limit(l) {};
    bool operator()(const T & var) { return var >= limit; };
private:
    T limit;
};

void show(int n) { 
    using namespace std;
    cout << n << " ";
};

int main(void)
{
    using namespace std;
    int vals[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    list<int> alist(vals, vals + 10);
    list<int> blist(vals, vals + 10);

    TooBig<int> tooBig5(5);
    alist.remove_if(tooBig5);
    for_each(alist.begin(), alist.end(), show);
    cout << endl;

    blist.remove_if(TooBig<int>(1));
    for_each(blist.begin(), blist.end(), show);
    cout << endl;

    return 0;
}
// clang++ l16/functor.cpp && ./a.out
