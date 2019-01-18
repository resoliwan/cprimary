#include <iostream>
#include <cstdio>

int main(void)
{
    using namespace std;
    cout << "This system can generate up to " << TMP_MAX 
        << " temporary names of up to " << L_tmpnam
        << " charachers.\n";
    char pszName[L_tmpnam] = {'\0'};
    cout << "Here are tnen names:\n";
    for (int i = 0; i < 10; ++i) {
        tmpnam(pszName);
        cout << pszName << endl;
    }


    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/temp.cpp && ./a.out
