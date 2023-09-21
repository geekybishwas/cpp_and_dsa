#include <iostream>
using namespace std;
template <typename T>
T swap(T *a1,T*b1)
{
    T temp;
    temp = *a1;
    *a1 = *b1;
    *b1 = temp;
}
int main()
{
    int a = 1, b = 2;
    float c = 1.01, d = 2.01;
    swap(&a, &b);
    cout << "Swap value a and b :" << a << "," << b << endl;
    swap(&c, &d);
    cout << "Swap value c and d :" << c << "," << d << endl;
}