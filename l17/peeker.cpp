#include <iostream>

int main(void)
{
    using namespace std;
    cout << "Enter a sentance end with #: " << endl;
    char ch; 
    while (cin.get(ch)) 
    {
        if (ch != '#')
            cout << ch;
        else  
        {
            cin.putback(ch);
            break;
        }
    }

    if (!cin.eof()) 
    {
        cin.get(ch);
        std::cout << "Next character is :" << ch  << std::endl;
    } 
    else {
        std::cout << "End of file reached" << std::endl;
        std::exit(0);
    }

    while (cin.peek() != '#') 
    {
        cin.get(ch);
        std::cout << ch << std::endl;
    }

    if (!cin.eof()) 
    {
        cin.get(ch);
        std::cout << "Next character is :" << ch  << std::endl;
    } 
    else {
        std::cout << "End of file reached" << std::endl;
        std::exit(0);
    }


    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/peeker.cpp && ./a.out
