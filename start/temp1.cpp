#include <iostream>
using namespace std;
template <typename T>
class Practice
{
    T a, b, c;

public:
    Practice() {}
    Practice(T n1, T n2, T n3)
    {
        a = n1;
        b = n2;
        c = n3;
    }
    T dispaly()
    {
        T sum = a + b + c;
        return sum;
    }
};
int main()
{
    Practice<int> b(1, 2, 3);
    cout << "Integer sum is " << b.dispaly() << endl;
    Practice<float> b1(1.2, 2.4, 5.1);
    cout << "Floating sum is " << b1.dispaly();
}