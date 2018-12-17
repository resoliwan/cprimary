#include <iostream>

int main(void)
{
    using namespace std;
    int ct = 0;
    char ch;
    cout << "Enter charcer: ";
    cin >> ch;
    while (cin) 
    {
        cout << ch;
        ct++;
        cin >> ch;
    }

    cout << "\n done \n";

    char b = cin.get();
    cout << b << endl;

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/get_extraction.cpp && ./a.out
