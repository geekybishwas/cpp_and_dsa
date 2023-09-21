#include <iostream>
using namespace std;
class Base1
{
    int b;

public:
    Base1(int x1)
    {
        b = x1;
    }
    virtual void show() = 0;
};
class Derived : public Base1
{
    int a;

public:
    Derived(int x, int y) : Base1(x)
    {
        a = y;
    }
    void show()
    {
        cout << "K xa" << endl;
    }
};
class Derived1 : public Base1
{
    int c;

public:
    Derived1(int x, int y) : Base1(x)
    {
        c = y;
    }
    void show()
    {
        cout << "Hello" << endl;
    }
};
int main()
{
    Base1 *ptr;
    Derived D(2, 3);
    // D.show();
    ptr = &D;
    ptr->show();
    // Derived1 DD(4, 5);
    // DD.show();
}