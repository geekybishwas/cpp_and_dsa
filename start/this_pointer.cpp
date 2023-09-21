#include <iostream>
using namespace std;
class Test
{
    int x;

public:
    void setX(int x)
    {
        this->x = x;
    }
    void print()
    {
        cout << "x = " << x << endl;
    }
};
int main()
{
    Test a;
    a.setX(20);
    a.print();
}