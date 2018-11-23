#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    string one("one"); //string (char * s);
    cout << one << endl;

    string two(2, 'T'); //string (int size_type n, char c)
    cout << two << endl;

    string three(two); //string (string & s)
    cout << three << endl;

    one += " += "; //overloaded +=
    cout << one << endl;

    string four; //string ()
    four = two + three;
    four[0] = 'H';
    cout << four << endl;
    char alls[] = "abcdefg";
    string five(alls, 20); //string (char * s, int size_type n)
    cout << five << endl;

    string six (alls+1, alls+5); //template<class Iter> string (Iter begin, Iter end)
    cout << six << endl;
    string seven (&five[6], &five[10]);
    cout << seven << endl;
    string eight(four, 1, 3);
    cout << eight << endl;

    return 0;
}
