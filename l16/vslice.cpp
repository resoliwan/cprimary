#include <iostream>
#include <valarray>

const int SIZE = 12;
using vint = std::valarray<int>;
void show(const vint & arr, int cols);

int main(void)
{
    using namespace std;
    vint original(SIZE);

    for (int i = 0; i < SIZE; ++i) 
        original[i] = i;
    cout << "Original array: " << endl;
    show(original, 3);

    cout << "Second column: " << endl;
    vint secondes(original[slice(1, 4, 3)]) ;
    show(secondes, 1);

    cout << "Second row: " << endl;
    vint secondeRow = original[slice(3, 3, 1)];
    show(secondeRow, 3);

    cout << "Set last column to 10: " << endl;
    original[slice(2,4,3)] = 10;
    show(original, 3);

    cout << "Set first column to sum of nex two: " << endl;
    original[slice(0,4,3)] = vint(original[slice(1,4,3)]) + vint(original[slice(2,4,3)]);
    show(original, 3);

    return 0;
}

void show(const vint & arr, int cols) {
    using namespace std;
    int size = arr.size();
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i % cols == cols - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
};

// clang++ -Wno-c++11-extensions l16/vslice.cpp && ./a.out
