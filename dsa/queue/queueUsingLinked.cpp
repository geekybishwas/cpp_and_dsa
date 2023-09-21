#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
class QueueLinkedList
{
    private:
        Node *front = NULL;
        Node *rear = NULL;
    public:
        void enqueue(int x);
        int dequeue();
        void Display();
};
void QueueLinkedList::enqueue(int x)
{
    Node *t = new Node;
    if(t==NULL)
        cout << "Queue is full";
    else
    {
        t->data = x;
        t->next =NULL;
        if(front==NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
int QueueLinkedList::dequeue()
{
    int x = -1;
    Node *t = front;
    if(front==NULL)
        cout << "Queue is empty";
    else
    {
        front = front->next;
        x = t->data;
        delete t;
    }
    return x;
}
void QueueLinkedList::Display()
{
    Node *p = front;
    while(p!=NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    QueueLinkedList ql;
    ql.enqueue(2);
    ql.enqueue(3);
    ql.enqueue(4);
    ql.enqueue(5);
    ql.Display();
    cout << "deleted data is " << ql.dequeue();
}