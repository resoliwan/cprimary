#include <iostream>
#include <memory>
#include <string>

int main(void)
{
    using namespace std;

    auto_ptr<string> films[5] = {
        auto_ptr<string>(new string("A")),
        auto_ptr<string>(new string("B")),
        auto_ptr<string>(new string("C")),
        auto_ptr<string>(new string("D")),
        auto_ptr<string>(new string("E"))
    };

    auto_ptr<string> temp;
    temp = films[1];
    for (int i = 0; i < 5; ++i) {
        cout << *films[i] << endl;;
    }
    cout << "done\n" << endl;
    
    return 0;
}
