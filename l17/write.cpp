#include <iostream>

int main(void)
{
    using namespace std;
    char * before = "AAAAA";
    char * temp = "abcdefg";
    char * after = "ZZZZZZ";
    cout << "Increasing loop index:" << endl;
    int len = strlen(temp);
    for (int i = 0; i < len; ++i) {
        cout.write(temp, i);
        cout << endl;
    }

    cout << "Decreasing loop index: " << endl;
    for (int i = len; i > 0; --i) {
        cout.write(temp, i);
        cout << endl;
    }

    cout << "Exceeding string lenght" << endl;
    cout.write(temp, len + 5);
    cout << endl;
    
    long val = 1024;
    std::cout << "Staring number: " << std::endl;
    cout.write((char* ) &val, sizeof(long));
    cout << "@@" << endl;
    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/write.cpp && ./a.out
