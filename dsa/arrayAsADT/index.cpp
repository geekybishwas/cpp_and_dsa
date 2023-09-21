#include <iostream>
using namespace std;
class ArrayADT
{
    int A[12]={1,2,3,4};
    int size;
    int length;
    public:
        ArrayADT(int size, int length)
        {
            this->size = size;
            this->length = length;
        }
        void Display();
        void Add(int x);
        // int delete(int n);
        // void Insert(int n, int x);
};
// int ArrrayADT::delete(int n)
// {

// }
void ArrayADT::Display()
{
        cout << "Displaying the elements from the array " << endl;
        for (int i = 0; i <length; i++)
        {
            cout << A[i] << endl;
        }
}
void ArrayADT::Add(int x)
{
        A[length] = x;
        length++;
}
int main()
{
        ArrayADT a(12,4);
        // a.taking();
        a.Add(5);
        a.Display();
}