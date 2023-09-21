#include <iostream>
#include<iomanip>
using namespace std;
int a = 19;
int main()
{
    // int a = 3;
    // cout << "The value of a is"
    //      << a;
    // cout << "\nThe value of a in global scope is "
    //      << ::a<<endl; // :: is scope resolution operator
    
    // Reference variable
    float x = 1;
    float &y = x;
    cout << x << endl;
    cout << y << endl;
    
    // Type casting
    // int a = 45;
    // float b = 45.56;
    // cout << "The value of a is" <<setw(4)<<float(a) << endl;
    // cout << "The value of b is" << int(a) << endl;

    //Operator Precedence
    int a=3, b=4;
    int c = a * 5 + b;

    cout << setw(4) << c; // Expected output 19
}