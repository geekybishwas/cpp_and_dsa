#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *first;
public:
    LinkedList(){
        first = NULL;
    }
    LinkedList(int a[], int n);
    ~LinkedList();

    void Display();
    void Insert(int index, int x);
    // void Delete(int index);
    int Length();
    int Delete(int index);
};
LinkedList::LinkedList(int a[],int n )
{
    Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n;i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void LinkedList::Display()
{
    Node *p = first;
    while(p)
    {
        cout << p->data <<" ";
        p = p->next;
    }
}
LinkedList::~LinkedList()
{
    Node *p = first;
    while(first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}
void LinkedList::Insert(int index, int x)
{
    Node *p = first;
    // if(index<0)
    Node *q = new Node;
    q->data=x;
    q->next = NULL;
    if(index<0 || index>Length())
        return ;
    if (index == 0)
    {
        q->next =first;
        first = q;
    }
    else{
    for (int i = 0; i < index - 1;i++)
    {
        p = p->next;
    }
    q->next = p->next;
    p->next = q;
    }
}
int LinkedList::Delete(int index)
{
    Node *p= first;
    Node *q;
    int x;
    if (index < 0 || index > Length())
    return -1;
    if(index==0)
    {
    x =first->data;
    first = first->next;
    delete p;
    return x;
    }
    else
    {
    for (int i = 0; i < index;i++)
    {
    q=p;
    p = p->next;
    }
    x = p->data;
    q->next = p->next;
    delete p;
    return x;
    }
}
int LinkedList::Length()
{
    int i = 0;
    Node *p = first;
    while(p)
    {
    p = p->next;
    i++;
    }
    return i;
}
int main()
{
    int a[] = {10, 20, 25, 30, 45, 50};
    LinkedList l(a, 6);
    l.Insert(6, 11);
    l.Display();
    cout << "---------" << endl;
    cout<<l.Length();
    cout << "---------" << endl;
    cout<<l.Delete(1);
    cout << "---------"<< endl;
    l.Display();
}

