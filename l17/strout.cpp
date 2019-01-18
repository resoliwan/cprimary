#include <iostream>
#include <sstream>
#include <string>

int main(void)
{
    using namespace std;
    ostringstream outstr;
    string hdisk = "A";
    int cap = 10;
    outstr << "The harddisk " << hdisk << " has a capacity of " << cap << " gigabytes.\n";
    string result = outstr.str();
    cout << result;
    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/strout.cpp && ./a.out
