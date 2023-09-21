#include <iostream>
using namespace std;
class complex{
    int a, b;
    public:
        void setData(int a1, int b1)
        {
            a = a1;
            b = b1;
        }
        void sumOfObjects(complex c1, complex c2) // Passing object as a arguments
        {
            a = c1.a + c2.a;
            b = c1.b + c2.b;
        }
        void printComplex()
        {
            cout << "Complex number is " << a << " + " << b << " i " << endl;
        }
};

int main()
{

        complex c1, c2, c3;
        c1.setData(1, 2);
        c1.printComplex();

        c2.setData(2, 3);
        c2.printComplex();

        c3.sumOfObjects(c1,c2);
        c3.printComplex();

}