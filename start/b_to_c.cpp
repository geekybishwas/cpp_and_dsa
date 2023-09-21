#include <iostream>
using namespace std;
class A
{
    int m;
    public:
    A(){}
    A(int cm1)
    {
        m = cm1 * 100;
    }
    void display()
    {
        cout << "Meter in cm is " << m << endl;
    }
};
int main()
{
    A a;
    float m1;
    cout << "Enter meter in floating number"<< endl;
    cin >> m1;
    a = m1; // Convert from basic to user-defined ;
    a.display();
}