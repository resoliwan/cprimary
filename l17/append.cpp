#include <iostream>
#include <fstream>
#include <cstdlib>

// show file contents
// add name and quit at empty line\n
// show all contents

const char * filename = "./l17/name.txt";
int main(void)
{
    using namespace std;

    // show file contents
    ifstream fin;
    fin.open(filename, ios_base::in);

    string name;
    int cnt = 0;

    if (fin.is_open()) {
        while (getline(fin, name)) {
            std::cout << ++cnt << " : " << name << std::endl;
            name.clear();
        }
    }
    fin.close();

    // add name at the file and quit when a empty line.
    ofstream fout(filename, ios_base::out | ios_base::app);

    std::cout << "Enter new names (enter a blank line to quit)" << std::endl;
    if (!fout.is_open()) {
        std::cout << "Error while opening a file." << std::endl;
        exit(EXIT_FAILURE);
    }
    while (getline(cin, name) && name.size() > 0)
        fout << name << endl;
    fout.close();

    fin.open(filename, ios_base::in);
    if (fin.is_open()) {
        cnt = 0;
        while (getline(fin, name)) {
            std::cout << ++cnt << " : " << name << std::endl;
            name.clear();
        }
    }
    fin.close();

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/append.cpp && ./a.out
