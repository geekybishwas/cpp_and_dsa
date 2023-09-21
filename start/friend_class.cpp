#include <iostream>
using namespace std;
// Forward Declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};
class Complex
{
    int a, b;

    // Individual declaring functions as friends.

    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumComComplex(Complex o1, Complex o2);

    // Declaring the entire calculaotor class as friend

    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void showData()
    {
        cout << "The value of a and b is " << a << " " << b << endl;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " " << b << "i" << endl;
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumComComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(2, 3);
    o2.setNumber(4, 6);
    Calculator sum;
    cout
        << "The sum of real part of o1 and o2 is " << sum.sumRealComplex(o1, o2) << endl;
    cout
        << "The sum of real part of o1 and o2 is " << sum.sumComComplex(o1, o2) << endl;
}