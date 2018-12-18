#include <iostream>
#include <fstream>

int main(void)
{
    using namespace std;

    string filename;
    std::cout << "Enter name for new file: " << std::endl;
    cin >> filename;
    ofstream fout(filename);
    fout << "Write at file" << endl;

    string password;
    std::cout << "Enter your secret number: " << std::endl;
    cin >> password;
    fout << "serect: " <<  password << endl;
    fout.close();

    ifstream fin(filename);
    std::cout << "Here is the content of the " << filename << std::endl;
    char ch;
    while (fin.get(ch))
        cout << ch;

    std::cout << "Done" << std::endl;

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/fileio.cpp && ./a.out
