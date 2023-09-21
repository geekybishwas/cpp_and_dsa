
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int a, b,age;
    cout << "Enter two numbers " << endl;
    cin>>a>>b;
    cout << "Enter your age" << endl;
    cin >> age;
    try
    {
    if (b==0)
    {
        throw "Not possible";
    }
    else
    {
        int c;
        c = a / b;
        cout << c << endl;
    }
    if (age<18)
    {
    throw 505;
    }
    else
    {
    cout << "You are applicable to vote " << endl;
    }
    }
    catch (const char* ex)
    {
    cout<< ex;
    }
    catch (int x)
    {
    cout << "Error occured" << endl;
    cout << "Age is low" << endl;
    }
}