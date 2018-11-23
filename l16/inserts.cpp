#include <iostream>
#include <iterator>
#include <vector>

void print(const std::string & s) { std::cout << s << " "; }

int main(void)
{
    using namespace std;
    string s1[4] = {"a", "b", "c", "d"};
    string s2[2] = {"e", "f"};
    string s3[2] = {"g", "h"};

    vector<string> words(4);

    //copy s1 to words
    copy(s1, s1 + 4, words.begin());
    for_each(words.begin(), words.end(), print);
    cout << endl;

    //back insert s2 to words.
    copy(s2, s2 + 2, back_insert_iterator<std::vector<string> >(words));
    for_each(words.begin(), words.end(), print);
    cout << endl;

    //insert s3 to words
    copy(s3, s3 + 2, insert_iterator<std::vector<string> >(words, words.end()));
    for_each(words.begin(), words.end(), print);
    cout << endl;
    return 0;
}
