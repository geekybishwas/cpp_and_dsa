#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;
    int **c =&b; // c is varaible thats stores the address of b which is also pointing to the address of a, c is a double pointer
    // & -- address of operator

    // * ---Dereference operator 
    cout << b; // Expected output : Address of a
    cout << "b pointing to the address of a" << &a<<endl;
    cout << "The value inside the address of b is" <<setw(2)<< *b<<endl;
    cout << "The value inside the address of address of c is" << setw(2) << **c;
    int x[] = {1, 2, 3, 4 };
    cout << "The address of x[0] is " << &x[0]<<endl;
    cout << "The address of x is " << &x;
}