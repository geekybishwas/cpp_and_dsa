#include <iostream>
using namespace std;
class Base
{
public:
    int var1;
    void display()
    {
        cout << "Base class var1 " << var1 << endl;
    }
};
class Derived : public Base
{
public:
    int var2;
    void display()
    {
        cout << "Base class var1 " << var1 << endl;
        cout << "Derived class var2 " << var2 << endl;
    }
};
int main()
{
    Base *p; // Pointer pointing to the base class object
    Base obj1;
    Derived obj2;
    p = &obj2; // Pointer pointing to the derived class object
    p->var1 = 23;
    p->display();
    obj1.var1 = 234;
    Derived *d;
    d = &obj2;
    d->var1 = 13;
    d->var2 = 340;
    d->display();
}