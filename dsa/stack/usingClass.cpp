// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };
// class Stack
// {
//     private:
//         Node *top;
//     public:
//         Stack(){top = NULL;}
//         void push(int x);
//         int pop();
//         void Display();
// };
// void Stack::push(int x)
// {
//         Node *t =new Node;
//         if(t==NULL)
//             cout << "Stack Overflow\n";
//         else{
//             t->data = x;
//             t->next = top;
//             top = t;
//         }
// }
// int Stack::pop()
// {
//         Node *t = top;
//         int x=-1;
//         if (t == NULL)
//             cout << "Stack is Empty\n";
//         else
//         {
//             x = t->data;
//             top = top->next;
//             delete t;
//         }
//         return x;
// }
// void Stack::Display()
// {
//         Node *t = top;
//         while(t!=NULL)
//         {
//             cout << t->data << " ";
//             t = t->next;
//         }
//         cout << endl;
// }

// int main()
// {
//         Stack st;
//         st.push(12);
//         st.push(13);
//         st.push(14);
//         st.push(15);
//         st.Display();
//         cout << "Popping element is" << st.pop()<<endl;
//         st.Display();
// }
#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
class StackLinkedList
{
    private:
        Node *top;
    public:
        StackLinkedList() {top = NULL;}
        void push(int x);
        int pop();
        void Display();
};
void StackLinkedList::Display()
{
    Node *p = top;
    while(p!=NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int StackLinkedList::pop()
{
    int x = -1;
    if (top == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        Node *t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}
void StackLinkedList::push(int x)
{
    Node *t = new Node;
    if(t==NULL)
    {
        cout << "Stack is full";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t; 
    }
}
int main()
{
    StackLinkedList s;
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.Display();
}