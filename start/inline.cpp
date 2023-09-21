#include <iostream>
using namespace std;
inline int sum(int, int); // inline function
int defa(int a,int b=5){  // Here b =5 is the default argument
    return a * b;
}
int con(int a, const int b){ // Here b is the constant argument
    a++;
    // b++; // b cannot be increment coz b is constant.
    return a + b;
}
int main()
{
    int a=3, b=2;
    cout << "The sum is " << sum( a, b)<<endl;
    cout << defa(a) << endl;
    cout << defa(a, b) << endl;
    cout << con(a, b) << endl;
}
int sum(int a, int b) 
{
    return a + b;
}