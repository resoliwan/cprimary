#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
    ifstream fin;
    fin.open("./test.txt");

    if (fin.is_open() == false)
    {
        cerr << "Can't open the file";
        exit(EXIT_FAILURE);
    }

    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin) 
    {
        cout << ++count << ": " << item << endl;
        getline(fin, item, ':');
    }

    cout << "Done\n";
    
    return 0;
}
