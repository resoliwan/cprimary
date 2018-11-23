#include <iostream>
#include <vector>
#include <string>

const int SIZE = 2;

int main(void)
{
    using namespace std;
    using std::string;
    vector<int> rating(SIZE);
    vector<string> titles(SIZE);

    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter the title #" << i + 1 << ": ";
        getline(cin, titles[i]);
        cout << "Enter your rating (0-10) : ";
        cin >> rating[i];
        cin.get();
    }

    for (int i = 0; i < SIZE; ++i) {
        cout << i + 1 << ": " << titles[i] << " / " << rating[i] << endl;
    }
    return 0;
}
