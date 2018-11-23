#include <iostream>
#include <vector>
#include <iterator>

int main(void)
{
    using namespace std;

    int casts[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> dices(10);

    cout << "Let the dices be cast" << endl;
    copy(casts, casts + 10, dices.begin());
    cout << endl;

    ostream_iterator<int, char> out_iter(cout, " ");
    cout << "Print dices" << endl;
    copy(dices.begin(), dices.end(), out_iter);
    cout << endl;

    cout << "Print dices use of reverser iterator" << endl;
    copy(dices.rbegin(), dices.rend(), out_iter);
    cout << endl;

    cout << "Print dices explity use of reverser iterator" << endl;
    vector<int>::reverse_iterator ri;
    for(ri = dices.rbegin(); ri != dices.rend(); ri++)
        cout << *ri << " ";
    cout << endl;
    
    return 0;
}
