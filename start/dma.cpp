#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int *p = &a;
    cout << "The value at address p is " << *p << endl;
    // delete p;
    int *pp = new int(40);
    cout << "The value at address pp is " << *pp << endl;
    delete pp;
    cout << "Free at address pp " << *pp << endl;
    // Dynamically allocated memory in array
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << *arr << endl;
    cout << "The value of arr[1] is " << *(arr + 1) << endl;
    // cout << "The value of arr[2] is " << arr[2] << endl;
    delete[] arr;
    cout << "The value of arr[1] is " << arr[2] << endl;
}