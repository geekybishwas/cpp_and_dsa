#include <iostream>
using namespace std;
class A
{
int ctmp;
public:
A(){}
operator float()
{
    float fer;
    fer = float(ctmp) * (9 / 5) + 32;
    return fer;
}
void getTemp()
{
    cout << "Enter temperature in celcius" << endl;
    cin >> ctmp;
}
};
int main()
{
A a;
float fer;
a.getTemp();
fer = a;
cout << "Temperature in f is " << fer;
}