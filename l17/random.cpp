#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
// Display the current contents of the plant.dat file
// Ask which record you want to modify
// Modifies that record
// Shows the revised files.

struct Plant 
{
    char name[20];
    double population;
    double g; // acceleration of gravity
};

const std::string filename = "./l17/binary.b";

inline void eatline() { while(std::cin.get() != '\n') { continue; } }

int main(void)
{
    using namespace std;
    fstream finout(filename, ios::binary | ios::in | ios::out);
    Plant p;
    if (finout.is_open()) {
        while (finout.read((char *)&p, sizeof p)) {
            cout << "name: " << p.name << " population: " 
                << p.population << " g: " << p.g << endl;
        }

        if (finout.eof())
            finout.clear();
    }
    
    int num;
    if (finout.is_open()) {
        cout << "Which a record do you want to modify? " << endl;
        cin >> num;

        streampos place = num * sizeof p; 
        finout.seekg(place);
        finout.read((char *)&p, sizeof p);
        cout << "name: " << setw(10) << p.name << " population: " << setw(10) << p.population << " g: " << setw(10) << p.g << endl;
        cout << "Enter a new population: " << endl;
        cin >> p.population;
        eatline();

        if (finout.eof())
            finout.clear();

        finout.seekp(place); //go back
        finout.write((char *)&p, sizeof p);

        finout.seekg(0);
        while (finout.read((char *)&p, sizeof p)) {
            cout << "name: " << p.name << " population: " 
                << p.population << " g: " << p.g << endl;
        }
    }

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/random.cpp && ./a.out
