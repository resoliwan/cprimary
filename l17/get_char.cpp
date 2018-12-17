#include <iostream>

int main(void)
{
    using namespace std;
    int ct = 0;
    char ch;
    cout << "Enter charcer: ";
    cin.get(ch);
    while (ch != '\n') 
    {
        cout << ch;
        ct++;
        cin.get(ch);
    }

    cout << "\n done \n";

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/get_char.cpp && ./a.out
