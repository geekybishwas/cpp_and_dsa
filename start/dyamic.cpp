#include <iostream>
using namespace std;
class Complex
{
    int a, b, c;
    float d;

public:
    Complex() {}
    Complex(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    Complex(int x, int y, float xy)
    {
        a = x;
        b = y;
        d = xy;
    }
    void show()
    {
        cout << "The values are " << a << ' ' << b << ' ' << c << " " << d << endl;
    }
};
int main()
{
    Complex op1, op2, op3;
    op1 = Complex(1, 2, 3);
    float floating;
    cin >> floating;
    op2 = Complex(1, 2, floating);
    op1.show();
    op2.show();
}