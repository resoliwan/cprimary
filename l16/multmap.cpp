#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>

typedef std::unordered_multimap<int, std::string> uo_multimap;

int main(void)
{
    using namespace std;
    multimap<int, string> cityMap;
    cityMap.insert(pair<const int, string>(1, "A"));
    cityMap.insert(pair<const int, string>(2, "B"));
    cityMap.insert(pair<const int, string>(3, "C"));
    cityMap.insert(pair<const int, string>(3, "D"));

    cout << "Number of city iwth area code 1 :" << cityMap.count(1) << endl;
    cout << "Number of city iwth area code 2 :" << cityMap.count(2) << endl;
    cout << "Number of city iwth area code 3 :" << cityMap.count(3) << endl;

    cout << "\tCode  City" << endl;
    multimap<int, string>::iterator it;
    for (it = cityMap.begin(); it != cityMap.end(); it++) 
        cout << "\t" << (*it).first << "     " << (*it).second << endl;

    cout << "Cities with code 3: " << endl;
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range = cityMap.equal_range(3);
    for(it = range.first; it != range.second; it++) 
        cout << (*it).second << endl;

    cout << "Cities with code 3: " << endl;
    auto range2 = cityMap.equal_range(3);
    for(auto it2 = range2.first; it2 != range2.second; it2++) 
        cout << (*it2).second << endl;

    return 0;
}


