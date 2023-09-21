#include <iostream>
using namespace std;
int fac(int a)
{
    if(a<=1)
    {
        return 1;
    }
    else{
        return a *fac(a - 1); //Recursion function
    }
}
int main()
{
    // Factorial of a number;
    int a;
    cout << "Enter the number you want to factorial " << endl;
    cin >> a;
    cout<<"Factorial is "<<fac(a);
}