#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex() {}
    friend void add(Complex, Complex);
    Complex(int x, int y = 9)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The values are " << a << " ," << b << endl;
    }
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.a = a + x.a;
        temp.b = b + x.b;
        return temp;
    }
};
void add(Complex p1, Complex p2)
{
    int A = p1.a + p2.a;
    int B = p1.b + p2.b;
    cout << "The addtion of complex is  " << A << "+" << B << "i" << endl;
}
int main()
{
    Complex a1(9), a2(10, 8), a3;
    a1.display();
    a2.display();
    a3 = a1 + a2;
    a3.display();
    add(a1, a2);
}