#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    struct Node *t;
    t = new Node;
    if(t==NULL)
        cout << "Stack is full" << endl;
    else{
        t->data = x;
        t->next = top;
        top=t;
    }
}
int pop()
{
    struct Node *t = top;
    int x=-1;
    if (top == NULL)
        cout << "Nothing to delete" << endl;
    else{
        x = t->data;
        top = top->next;
        delete t;
    }
    return x;
}
void Display()
{
    struct Node *t=top;
    if(top==NULL)
        cout << "Nothing to display" << endl;
    else{
        for (int i = 0; t!= NULL;i++)
        {
            cout << t->data << " " << endl;
            t = t->next;
        }
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    Display();
    cout << "Popping out element is " << pop() << endl;    
    Display();
}
