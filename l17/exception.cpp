#include <iostream>
#include <fstream>
 
int main() 
{
    using namespace std;
    int ivalue;
    try {
        in.exceptions(std::ifstream::failbit);
        std::bitset<4> except(in.exceptions());
        cout << "except: " << except << endl;
        std::ifstream in("in.txt");
        in >> ivalue;
    } catch (std::ios_base::failure& fail) {
        std::cout << "Error!" << std::endl;
        // handle exception here
    }
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/exception.cpp && ./a.out
