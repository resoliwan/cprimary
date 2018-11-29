#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void outint(int n) { std::cout << n << " ";}

int main(void)
{
    using namespace std;
    list<int> one(5, 0);
    int stuff[5] = {5, 1, 2, 2, 5};
    list<int> two;
    two.insert(two.begin(), stuff, stuff + 5);
    int more[6] = {6, 6, 6, 6, 6, 6};
    list<int> three(two);
    three.insert(three.end(), more, more + 6);

    cout << "List one: ";
    for_each(one.begin(), one.end(), outint);
    cout << endl;

    cout << "List two: ";
    for_each(two.begin(), two.end(), outint);
    cout << endl;

    cout << "List three: ";
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "List three minus 2s: ";
    three.remove(2);
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "List three after splice with one: ";
    three.splice(three.begin(), one);
    for_each(three.begin(), three.end(), outint);
    cout << endl << "List one: ";
    for_each(one.begin(), one.end(), outint);
    cout << endl;

    cout << "List three after unique: ";
    three.unique();
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "List three after unique & sort: ";
    three.sort();
    three.unique();
    for (int x : three) cout << x << " ";
    // for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "sorted two merge into the three: ";
    two.sort();
    three.merge(two);
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    return 0;
}
