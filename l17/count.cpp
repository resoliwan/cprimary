#include <iostream>
#include <fstream>
#include <cstdlib> //for exit

// a.out fname fanme2
// 3 characters in fanme1
// 2 characters in fanme2
int main(int argc, char * argv[])
{
    using namespace std;
    if (argc == 1) {
        cout << "Useage: " << argv[0] << " filename[s]" << endl;
        exit(EXIT_FAILURE);
    }

    ifstream fin;
    long cnt;
    long total = 0;
    char ch;

    for (int i = 1; i < argc; ++i) {
        fin.close();
        fin.clear();
        fin.open(argv[i]);
        if (!fin.is_open())
            std::cout << "Failed to open file: " << argv[i] << std::endl;
        else {
            cnt = 0;
            while (fin.get(ch)) 
                cnt++;
            cout << cnt << " characters in " << argv[i] << endl;
            total += cnt;
        }
    }

    std::cout << "total: " << total << std::endl;
    std::cout << "Done" << std::endl;

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/count.cpp && ./a.out
