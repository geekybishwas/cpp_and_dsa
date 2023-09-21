#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
            cout<< "Print base class" << endl;
    }
    void show()
    {
            cout<< "Print base class" << endl;
    }
};
class Derived:public Base
{
public:
void print()
{
            cout<< "Print derived class" << endl;
}
void show()
{
            cout << "Print derived class" << endl;
}
};
int main()
{
Base *btr;
Derived p;
btr = &p; //Base classs pointer pointing  to the derived class obejct

// Virtual function, binded at runtime(Late Binding )
// Dynamic Binding
btr->print();

// This will cal the virtual function of base class
btr->Base::print();

// Non-virtual function , binded at compile time(Early binding).
// Static Binding
btr->show();
}