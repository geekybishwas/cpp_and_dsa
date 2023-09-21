#include <iostream>
using namespace std;
class Base
{
    int x,z,q;
    float y;

public:
    Base(){
    }
    Base(int a)
    {
        x = a;
    } 
    Base(int a,int b)
    {
        x = a;
        z = b;
    } 
    Base(int a,int b, int c)
    {
        x = a;
        z = b;
        q = c;
    }
    Base(float a1)
    {
        y = a1;
    }
};
int main()
{
    float a2 = 1.23;
    Base s, s1(1), s2(a2), s3(1, 2), s4(1, 2, 3);
}