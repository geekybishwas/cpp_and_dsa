#include <iostream>
using namespace std;
class Operator
{
    int value;
    public:
    Operator()
    {
        value = 5;
    }
    void operator ++()
    {
        ++value;
        cout << "Prefix operator overloading call" << endl;
    }   
    void operator ++ (int)
    {
        value++;
        cout << "Postfix operator overloading call" << endl;
    }
    void display()
    
    {
        cout << "The value is " << value<<endl;
    }
};
int main()
{
    Operator o1;
    o1.display();
    o1++;
    o1.display(); // Call operator ++(int): Postfix
    ++o1;
    o1.display(); // Call operator ++() :Prefix
}