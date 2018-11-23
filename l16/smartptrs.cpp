// Destructor of smart pointer.
#include <iostream>
#include <memory>
using namespace std;

class Report
{
public:
    Report () { cout << "Object created!" << endl; };
    ~Report () { cout << "Objected deleted!\n"; };
    void comment() const { cout << "Hello!\n"; }
};

int main(void)
{
    {
        auto_ptr<Report> ap(new Report());
        ap->comment();
    }
    {

        // Report * r = new Report();
        // shared_ptr<Report> sp = shared_ptr<Report>(r);
        shared_ptr<Report> sp(new Report());
        sp->comment();
    }
    {
        unique_ptr<Report> up(new Report());
        up->comment();
    }

    return 0;
}
