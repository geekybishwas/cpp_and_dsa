#include <iostream>
using namespace std;
class Count
{
    int value;
    public:
    Count()
    {
        value = 3;
    }
    Count operator ++ ()
    {
        Count temp;
        cout << "Prefix called" << endl;
        temp.value = ++value;
        return temp;
    }
    Count operator ++ (int)
    {
        Count temp;
        cout << "Postfix called" << endl;
        temp.value = value++;
        return temp;
    }
    void display()
    {
        cout << "Value is " << value << endl;
    }
};
int main()
{
    Count c, r;
    c.display();
    r = ++c;
    r.display();
    r = c++;
    r.display();
}