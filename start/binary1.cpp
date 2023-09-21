#include <iostream>
using namespace std;
class Complex
{
    int real, img;
    public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r,int i)
    {
    real =r;
    img = i;
    }
    Complex operator + (Complex c)
    {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
    }
    void display()
    {
    cout << real << " +j " << img << endl;
    }
};
int main()
{
    Complex o1(2, 3), o2(4, 6), o3;
    o3 = o1 + o2;
    cout << "Complex 1" << endl;
    o1.display();
    cout << "Complex 2" << endl;
    o2.display();
    o3.display();
}