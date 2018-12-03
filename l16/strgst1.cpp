#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
    using namespace std;
    string word;
    cout << "Enter the letter grouping (quit to quit): ";

    while (cin >> word && word != "quit") {
        cout << "Permutations of " << word << endl;
        sort(word.begin(), word.end());
        cout << word << endl;
        while (next_permutation(word.begin(), word.end())) 
            cout << word << endl;

        cout << "Enter next sequence (quit to quit): ";
    }
    
    return 0;
}
