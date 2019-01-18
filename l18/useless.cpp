#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef USELESS_H
#define USELESS_H

class Useless
{
private:
    int num;
    char* pt;
    void showObj() const;
public:
    static int ct;
    Useless();
    explicit Useless(int n);
    Useless(int n, char c);
    Useless(Useless& u); //copy constructor
    Useless(Useless&& u); // move constructor
    Useless operator+(Useless& u);
    virtual ~Useless();
    void showData() const;
};

int Useless::ct = 0;

void Useless::showObj() const{
    cout << "ch: " << pt << ", add: " << this << endl;
}

Useless::Useless()
{
    ++ct;
    num = 0;
    pt = nullptr;
    showObj();
    cout << "default construtor()" << endl;
};

Useless::Useless(int n): num(n)
{
    ++ct;
    pt = new char[n];
    showObj();
    cout << "construtor(int n)" << endl;
};

Useless::Useless(int n, char c): num(n)
{
    ++ct;
    pt = new char[num];
    for (int i = 0; i < n; ++i) {
        pt[i] = c;
    }
    showObj();
    cout << "construtor(int n, char c)" << endl;
};
Useless::Useless(Useless& u): num(u.num) //copy constructor
{
    ++ct;
    pt = new char[u.num];
    for (int i = 0; i < u.num; ++i) {
        pt[i] = u.pt[i];
    }
    showObj();
    cout << "copy construtor(Useless& u)" << endl;
};

Useless::Useless(Useless&& u): num(u.num) //move constructor
{
    ++ct;
    pt = u.pt;
    u.pt = nullptr;
    u.num = 0;
    showObj();
    cout << "move construtor(Useless&& u)" << endl;
}

Useless::~Useless() 
{
    Useless::ct--;
    delete[] pt;
};

Useless Useless::operator+(Useless& u)
{
    Useless temp = Useless(num + u.num);
    for (int i = 0; i < num; ++i) {
        pt[i] = pt[i];
    }
    for (int i = num; i < temp.num; ++i) {
        pt[i] = pt[i];
    }
    cout << "temp: "  << &temp << endl;

    return temp;
};

void Useless::showData() const {
    cout << "num: " << num << ", pt: " << &pt << endl;
}

#endif /* USELESS_H */

int main() 
{
    Useless one(1, 'a'); 
    Useless two = one; 
    Useless three(3, 'c'); 
    Useless four (one + three);  //don't call move construtor, compiler deducies to assgin temp to four.
    cout << "four: "  << &four << endl;

    cout << "object one: "; 
    one.showData(); 
    cout << "object two: "; 
    two.showData(); 
    cout << "object three: "; 
    three.showData(); 
    cout << "object four: "; 
    four.showData();
}
