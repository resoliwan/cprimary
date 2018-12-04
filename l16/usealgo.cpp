#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>

std::string & ToLower(std::string & st);

int main() {
    using namespace std;

    string sentence = "D b c d a c";

    vector<string> words;
    // Vector
    stringstream ss(sentence);
    string word;
    cout << "Sentence: " << sentence << endl;
    while (getline(ss, word, ' ')) 
        words.push_back(word);

    // Set
    set<string> wordSet;
    transform(words.begin(), words.end(), insert_iterator<set<string> >(wordSet, wordSet.begin()), ToLower);
    cout << "Alphabetic list of unique words: " << endl;
    for (auto i : wordSet) 
        cout << i << endl;

    // Map
    map<string, int> wordMap;
    for (string i : words)
        wordMap[i] = count(words.begin(), words.end(), i);
    cout << "Number of word count: " <<endl;
    for (auto pai : wordMap) 
        cout << "Key: " << pai.first << " : " << pai.second << endl;

    return 0;
}
// clang++ -Wno-c++11-extensions l16/usealgo.cpp && ./a.out
//
std::string & ToLower(std::string & st) {
    transform(st.begin(), st.end(), st.begin(), tolower);
    return st;
};
