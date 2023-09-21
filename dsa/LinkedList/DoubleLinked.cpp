#include <iostream>
using namespace std;
class Node
{
    public:
    Node *prev;
    int data;
    Node *next;
};
class Doubly
{
    private:
        Node *first;
    public:
        Doubly(int a[], int n);
        void Display();
        int Length();
        void Insert(int index, int x);
        int Delete(int index);
};
int Doubly::Delete(int index)
{
    Node *p = first;
    Node *q;
    int x;
    if (index<1 || index>Length())
    {
        return -1;
    }
    if(index==1)
    {
        first = first->next;
        if(first)
            first->prev = NULL;
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < index - 1;i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if(p->next)
            p->next->prev = p->prev;
        x = p->data;
        delete p;
    }
    return x;
}
int Doubly::Length()
{
    Node *p = first;
    int len = 0;
    while(p)
    {
        len++;
        p = p->next;
    }
    return len;
}
Doubly::Doubly(int a[],int n)
{
    Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->prev = first->next = NULL;
    last = first;
    for (int i = 1; i < n;i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void Doubly::Insert(int index,int x)
{
    Node *p = first;
    Node *t;
    if (index < 0 || index > Length())
        return;
    if(index==0)
    {
        t = new Node();
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        t = new Node();
        t->data = x;
        for (int i = 0; i <index-1;i++)
        {
            p = p->next;
        }
        t->prev = p;
        t->next = p->next;
        if(p->next)
        {
            p->next->prev = t;
        }
        p->next = t;
    }
}
void Doubly::Display()
{
    Node *p = first;
    while (p != NULL)
    {
        cout << p->data <<" ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    Doubly d(a, 6);
    // d.Display();
    d.Insert(0, 23);
    d.Display();
    d.Delete(1);
    d.Display();
}