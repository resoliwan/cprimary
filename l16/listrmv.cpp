#include <iostream>
#include <list>

static const int LIM = 10;

int main(void)
{
    using namespace std;
    int vals[LIM] = {0, 1, 1, 3};
    list<int> la = list<int>(vals, vals + 4); 
    list<int> lb(la);
    list<int> lc(la);

    cout << "Original list contents: " << endl;
    for (int i : la) cout << i << " ";
    cout << endl;
        
    cout << "After using the remove() method: " << endl;
    lb.remove(1);
    for (int i : lb) cout << i << " ";
    cout << endl;

    list<int>::iterator lastIt;
    cout << "After using the remove() function: " << endl;
    lastIt = remove(lc.begin(), lc.end(), 1);
    for (int i : lc) cout << i << " ";
    cout << endl;

    cout << "After using the erase() method: " << endl;
    lc.erase(lastIt, lc.end());
    for (int i : lc) cout << i << " ";
    cout << endl;

    return 0;
}
