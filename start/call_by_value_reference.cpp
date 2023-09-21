#include <iostream>
using namespace std;
void swap(int, int);
void swapPointer(int *, int *);
void swapReferenceVar(int &a, int &b) // Swap using pointer reference or reference variable
{
    int temp=a;
    a=b;
    b = temp;
}
int main()
{
    int a=4, b=5;
    int z =1;
    int &refZ =z;
    refZ = 2;
    cout << "The address of z and refZ is " << z << " " << refZ << endl;
    cout << "The value of a and b before calling function by call by value is " << a << " " << b << endl;
    swap(a, b);
    cout << "The value of a and b after calling function by call by value is " << a << " " << b << endl;
    swapPointer(&a, &b);
    cout << "The value of a and b after calling function by call by reference is " << a << " " << b << endl;
    int x = 2, y =3;
    swapReferenceVar(x, y);
    cout << "The value of x and y after calling function by reference varaible is " << x << " " << y << endl;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b = temp;
}
void swapPointer(int* a, int* b)
{
    int temp=*a;
    *a = *b;
    *b = temp;
}