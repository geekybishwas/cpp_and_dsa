#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void print_data1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void print_data2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int der1, der2;

public:
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
    {
        der1 = c;
        der2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void print_der()
    {
        print_data1();
        print_data2();
        cout << "The value of der1 is " << der1 << endl;
        cout << "The value of der2 is " << der2 << endl;
    }
};
int main()
{
    Derived d(1, 2, 3, 4);
    // d.print_data1();
    // d.print_data2();
    d.print_der();
}