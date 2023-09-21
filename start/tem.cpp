#include <iostream>
using namespace std;
template <typename T>
T large(T n1, T n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
int main()
{
    int a = 1, b = 2;
    float c = 2.02, d = 1.01;
    char e = 'e', f = 'f';
    cout << "Largest integer number is " << large<int>(a, b) << endl;
    cout << "Largest floating number is " << large<float>(c, d) << endl;
    cout << "Largest character  is " << large<char>(e, f) << endl;
}