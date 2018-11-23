#include <iostream>
#include <memory>
#include <string>

int main(void)
{
    using namespace std;

    shared_ptr<string> films[5] = {
        shared_ptr<string>(new string("A")),
        shared_ptr<string>(new string("B")),
        shared_ptr<string>(new string("C")),
        shared_ptr<string>(new string("D")),
        shared_ptr<string>(new string("E"))
    };

    shared_ptr<string> temp;
    temp = films[1];
    for (int i = 0; i < 5; ++i) {
        cout << *films[i] << endl;;
    }
    cout << "done\n" << endl;
    
    return 0;
}
