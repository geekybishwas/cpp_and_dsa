#include <iostream>
#include <math.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp = *x;
    *x= *y;
    *y = temp;
}
void Bubble(int A[],int n)
{
    for (int i = 0; i < n - 1;i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i;j++)
        {
        if(A[j]>A[j+1]){
            swap(&A[j], &A[j + 1]);
            flag = 1;
        }
        }
        if(flag==0) break;
    }
}
void Insertion(int A[],int n)
{
    int x;
    for (int i = 1; i < n;i++)
    {

        int j = i - 1;
        x = A[i];
        while(j>-1 && A[j]>x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
void Selection(int A[],int n)
{
    int j, k;
    for (int i = 0; i < n - 1; i++)
    {
        for(j = k = i; j < n;j++)
        {
            if (A[j]<A[k])
            k = j;
        }
        swap(&A[i],&A[k]);
    }
}
int partition(int A[],int low,int high)
{
    int pivot = A[low];
    int i = low, j = high;
    do{
    do{
            i++;
    } while (A[i] <= pivot);
    }
    return 1;
}
int main()
{
    int A[] = {11, 4, 10, 2, 1,8,14,5,12,888888};
    int n = sizeof(A) / sizeof(A[0]);
    // Insertion(A, n);
    Selection(A, n);
    // Bubble(A, n);
    for (int i = 0; i < n;i++)
    {
        cout << A[i] << " ";
    }
}