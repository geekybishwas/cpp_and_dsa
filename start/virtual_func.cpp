#include <iostream>
using namespace std;
class Base
{
public:
    int var1 = 1;
    virtual void display()
    {
        cout << "Base class var1 " << var1 << endl;
    }
};
class Derived : public Base
{
public:
    int var2 = 2;
    void display()
    {
        cout << "Base class var1 " << var1 << endl;
        cout << "Derived class var2 " << var2 << endl;
    }
};
int main()
{
    Base *b;
    Base obj1;
    Derived obj2;
    b = &obj2;
    b->display();
    b->var1 = 2;
    b->display();
}
