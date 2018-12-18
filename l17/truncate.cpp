#include <iostream>

const int MAX = 3 + 1;

void eatline() { while (std::cin.get() != '\n') continue; }

int main(void)
{
    using namespace std;
    char name[MAX];
    char title[MAX];
    std::cout << "Enter your name: " << std::endl;
    cin.get(name, MAX);

    if (cin.peek() != '\n')
        std::cout << "We only have enough room for " << name << std::endl;
    eatline();

    std::cout << "Enter your title: " << std::endl;
    cin.get(title, MAX);

    if (cin.peek() != '\n')
        std::cout << "We only have enough room for " << title << std::endl;
    eatline();

    std::cout << "Done" << std::endl;

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/truncate.cpp && ./a.out
