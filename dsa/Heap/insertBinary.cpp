#include <iostream>
using namespace std;
void Insert(int A[],int n)
{
    int i = n, temp;
    temp = A[i];

    while(i>1 && temp>A[i/2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}
int Delete(int A[],int n)
{
    int i, j, x,temp,val;
    val = A[1];
    x = A[n];
    A[1] = A[n];
    A[n] = val;
    i = 1;
    j = i * 2;
    while(j<n-1)
    {
        if(A[j+1]>A[j])
            j = j + 1;
        if(A[i]<A[j])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = j * 2;
        }
        else
            break;
    }
        return val;
}
int main()
{
    int A[] = {0, 10,20,30,40,35,25,5};
    int a = sizeof(A) / sizeof(A[0]);
    cout << a << endl;
    for (int i = 2; i < sizeof(A) / sizeof(A[0]); i++)
        Insert(A, i);
    cout << "Delete value is " << Delete(A, 7) << endl;
    cout << "Delete value is " << Delete(A, 6) << endl;
    for (int i = 1; i < 8; i++)
        cout << A[i] << endl; 
}
