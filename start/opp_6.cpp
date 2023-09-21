#include <iostream>
using namespace std;
class Y;
class X
{
    int val1;

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
    friend void add(X, Y);
    friend void exchange(X &, Y &);
};
class Y
{
    int val2;

public:
    void inData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
    friend void add(X, Y);
    friend void exchange(X &, Y &); // Reference varibale;
};
void add(X o1, Y o2)
{
    cout << "The complex number is " << o1.val1 << " + " << o2.val2 << "i" << endl;
}
// Call by reference
void exchange(X &x, Y &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main()
{
    X o1;
    Y o2;
    o1.inData(3);
    o2.inData(4);
    add(o1, o2);
    exchange(o1, o2);
    cout << "The value of c1 after exchanging is ";
    o1.display();
    cout << "The value of c2 after exchanging is ";
    o2.display();
    add(o1, o2);
}