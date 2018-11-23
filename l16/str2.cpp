#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    string empty = "";
    string small = "123";
    string larger = "1234567891011121314151617";

    cout << "Sies:" << endl;
    cout << "\t empty: " << empty.size() << endl;
    cout << "\t small: " << small.size() << endl;
    cout << "\t larger: " << larger.size() << endl;

    cout << "Capacity:" << endl;
    cout << "\t empty: " << empty.capacity() << endl;
    cout << "\t small: " << small.capacity() << endl;
    cout << "\t larger: " << larger.capacity() << endl;

    return 0;
}
