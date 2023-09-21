#include <iostream>
using namespace std;
class Base1
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};
class Base2
{
public:
    void say()
    {
        cout << "K xa khabar" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;

public:
    void say()
    {
        Base1::say();
    }
};

// Another Ambiguity occurences

class B
{
public:
    void say()
    {
        cout << "Hello k xa kbr" << endl;
    }
};
class D : public B
{
public:
    void say()
    {
        cout << "Hello " << endl;
    }
};
int main()
{

    // Ambiguity 1
    // Base1 a1;
    // a1.say();
    // Base2 a2;
    // a2.say();
    // Derived d;
    // d.say(); // Ambiguity occurs

    // Ambiguity 2
    D d;
    d.B::say();
}