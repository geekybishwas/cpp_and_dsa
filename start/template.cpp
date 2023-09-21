#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(T ptr[], int m)
    {
        size = m;
        arr = new T[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = ptr[i];
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << " " << *(arr + i);
        }
        cout << endl;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {1, 2, 3, 4, 5};
    vector<int> a(arr, 5);
    vector<int> a1(arr1, 5);
    a.print();
    a1.print();
}