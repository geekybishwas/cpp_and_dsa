#include <iostream>
#include <string.h>
using namespace std;
class Base1
{
private:
    int marks1;

protected:
    int base1int;

public:
    void set_marks1(int a)
    {
        marks1 = a;
    }
    void show_marks1(void)
    {
        cout << marks1 << endl;
    }
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
private:
    int marks2;

protected:
    int base2int;

public:
    void set_marks2(int a)
    {
        marks2 = a;
    }
    void show_marks2(void)
    {
        cout << marks2 << endl;
    }
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
protected:
    int total;

public:
    void show()
    {

        total = base1int + base2int;
        cout << "The total is " << total;
    }
};
int main()
{
    Derived d;
    d.set_marks1(3);
    d.set_marks2(4);
    d.show_marks1();
    d.show_marks2();
    d.set_base1int(90);
    d.set_base2int(100);
    d.show();
}