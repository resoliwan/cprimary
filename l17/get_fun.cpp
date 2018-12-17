#include <iostream>
const int LIMIT = 255;

int main(void)
{
    using namespace std;
    char input[LIMIT];
    // cout << "Enter a string for getline() processing: \n";
    // cin.getline(input, LIMIT, '#');
    //
    // cout << "Here is your input:\n";
    // cout << input << "\nDonw with pahse 1\n";

    char ch;
    // cin.get(ch);
    // cout << "The next input character is " << ch << endl;

    cout << "Etner a string for get() processing\n";
    cin.get(input, LIMIT, '#');
    cout << "Here is your input:\n";
    cout << input << "\nDonw with pahse 1\n";


    cin.get(ch);
    cout << "The next input character is " << ch << endl;

    



    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/get_fun.cpp && ./a.out
