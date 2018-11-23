#include <iostream>

int main(void)
{
    using namespace std;
    int size = 2;
    double ar[2] = {0, 1};
    cout << &ar[2] << endl;
    cout << &ar[3] << endl;
    cout << &ar[4] << endl;
    // for (int i = 0; i <= size; ++i) {
    //     cout << ar[i] << endl;
    // }

    return 0;
}
