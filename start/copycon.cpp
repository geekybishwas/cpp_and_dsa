 #include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }
    Number(Number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(3);
    x.display();
    y.display();
    z.display();
    Number z1(z); // Copy
    Number z2 = z; // Copy
    z2.display();
    z1.display();
}