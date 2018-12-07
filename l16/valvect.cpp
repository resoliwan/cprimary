#include <iostream>
#include <vector>
#include <valarray>

const int SIZE = 3;

int main(void)
{
    using namespace std;
    double arr[SIZE] = { 2.2, 0.0, 1.1 };
    std::vector<double> valVec(arr, arr + SIZE);
    // double temp;
    // cout << "Enter numbers (<=0 to quit): ";
    // while(cin >> temp && temp > 0)
    //     valVec.push_back(temp);

    sort(valVec.begin(), valVec.end());
    valarray<double> valArr(valVec.size());
    for (int i = 0; i < SIZE; ++i)
        valArr[i] = valVec[i];

    valarray<double> sq_rts(SIZE);
    sq_rts = sqrt(valArr);

    valarray<double> results(SIZE);
    results = valArr + 200 * sq_rts;

    cout.setf(ios_base::fixed);
    cout.precision(4);
    cout.width(8);
    cout << "original: ";
    cout.width(8);
    cout << "result: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout.width(8);
        cout << valArr[i] << ": ";
        cout.width(8);
        cout << results[i] << endl;
    }
    
    return 0;
}
// clang++ -Wno-c++11-extensions l16/valvect.cpp && ./a.out
