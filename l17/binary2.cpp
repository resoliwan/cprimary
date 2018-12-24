#include <iostream>
#include <fstream>
//read binary file 
//get data from user 
//write to the file as binary format
//read it agagin.
//Plant.
//  name
//  population.
//  g 
struct Plant 
{
    char name[20];
    double population;
    double g; // acceleration of gravity
};

void eatline() { while (std::cin.get() != '\n') continue; };

const char filename[20] = "./l17/binary.b";
int main(void)
{
    using namespace std;
    ifstream fin;
    fin.open(filename, ios::in | ios::binary);
    Plant p;
    if (fin.is_open()) 
    {
        while (fin.read( (char *) &p, sizeof(p))) {
            cout << "name: " << p.name << " popluation: " 
                << p.population << " g: " << p.g << endl;
        }
        fin.close();
    }

    ofstream fout;
    fout.open(filename, ios::out | ios::app | ios::binary);
    if (fout.is_open()) 
    {
        std::cout << "Enter a plant name: (enter empty line to quit)";
        cin.get(p.name, 20);
        while (p.name[0] != '\0') {
            std::cout << "Enter a population: ";
            cin >> p.population;

            std::cout << "Enter a acceleration of gravity: ";
            cin >> p.g;
            eatline();
            fout.write((char *) &p, sizeof(p));

            std::cout << "Enter a plant name: (enter empty line to quit)";
            cin.get(p.name, 20);
        } 
        fout.close();
    }
    cout << endl;

    fin.open(filename, ios::in | ios::binary);
    if (fin.is_open()) 
    {
        while (fin.read( (char *) &p, sizeof(p))) {
            cout << "name: " << p.name << " popluation: " 
                << p.population << " g: " << p.g << endl;
        }
        fin.close();
    }

    return 0;
}
// clang++ -std=c++11 -Wno-c++11-extensions l17/binary2.cpp && ./a.out
