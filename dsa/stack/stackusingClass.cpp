// #include <iostream>
// using namespace std;
// class Stack
// {
//     int top;
//     int *Q;
//     int size;
//     public:
//         Stack()
//         {
//             top = -1;
//             size = 4;
//             Q = new int[size];
//         }
//         Stack(int size)
//         {
//             top = -1;
//             this->size = size;
//             Q = new int[this->size];
//         }
//         void push(int x);
//         int pop();
//         void Display();
//         void isEmpty();
//         void isFull();
//         int Peek(int n);
//         int StackTop();
// };
// void Stack::push(int x)
// {
//     if(top==size-1)
//             cout << "Stack is full";
//     else{
//             top++;
//             Q[top] = x;
//     }
// }
// int Stack::pop()
// {
//     int x = -1;
//     if(top==-1)
//             cout << "Stack underflow";
//     else{
//             x = Q[top];
//             top--;
//     }
//     return x;
// }
// void Stack::Display()
// {
//     for (int i = top; i>= 0;i--)
//             cout << Q[i] << endl;
// }
// int Stack::Peek(int pos)
// {
//     int x = -1;
//     if (top - pos + 1 < 0)
//             cout << "Invalid position";
//     else
//     {
//             x = Q[top - pos + 1];
//     }
//     return x;
// }
// int Stack::StackTop()
// {
//     if(top==-1)
//         return -1;
//     else
//         return Q[top];
// }
// void Stack::isEmpty()
// {
//     if(top==-1)
//         cout << "Is empty";
//     else
//         cout << "Not empty";
// }
// void Stack::isFull()
// {
//     if(top==size-1)
//         cout << "Stack is full";
//     else
//         cout << "Stack is not full";
// }
// int main()
// {
//     Stack s(5);
//     s.push(2);
//     s.push(4);
//     s.push(4);
//     s.push(5);
//     cout << "Popping value " << s.pop()<<endl;
//     s.Display();
//     cout << endl;
//     s.StackTop();
//     cout << "\nValue at positon 3 is " << s.Peek(3);
//     cout << endl;
//     s.isEmpty();
// }
#include <iostream>
using namespace std;
class Stack
{
    int size;
    int top;
    int *Q;
    public:
        Stack()
        {
            top = -1;
            size = 4;
            Q = new int[size];
        }
        Stack(int size)
        {
            this->size = size;
            top = -1;
            Q = new int[this->size];
        }
        void Display();
        void push(int x);
        int pop();
        int peek(int pos);
};
int Stack::peek(int pos)
{
    int x = -1;
    if((top-pos+1)<0)
        cout << "Invalid Position";
    else
    {
        x = top - pos + 1;
    }
    // cout << endl;
    return x;
}
void Stack::push(int x)
{
    if(top==size-1)
        cout << "Stack overflow";
    else
    {
        top++;
        Q[top] = x;
    }
}
int Stack::pop()
{
    int x=-1;
    if (top == -1)
        cout << "Stack underflow";
    else
    {
        x = Q[top];
        top--;
    }
    return x;
}
void Stack::Display()
{
    while(top!=-1)
    {
        cout << Q[top] << " ";
        top--;
    }
    cout << endl;
}
int main()
{
    Stack s(4);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    // s.push(5);
    cout << "The value at position 2 is " << s.peek(2) << endl;
    s.Display();
}