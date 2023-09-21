#include <iostream>
using namespace std;
class Employee
{

private:
    int a, b, c;
    public:
        int e, f, g;
        void setData(int a1, int b1, int c1);
        void getData()
        {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of e is " << e << endl;
            cout << "The value of af is " << f << endl;
        }
};
void Employee::setData(int a1, int b1, int c1) {
        a = a1;
        b = b1; 
        c = c1;
}
int main()
{
        Employee bishwas;
        bishwas.e = 40;
        bishwas.f = 50l;
        bishwas.g = 80;
        bishwas.setData(12, 43, 52);
        bishwas.getData();
}