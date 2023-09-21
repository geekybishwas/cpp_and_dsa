#include <iostream>
using namespace std;
struct Node 
{
    int data;
    Node *next;
}*first=NULL;
void create(int a[],int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        cout << p->data << endl;
        RDisplay(p->next);
    }
}
int count(struct Node *p)
{
    int c = 0;
    while(p!=NULL)
    {
        return 1 + count(p->next);
    }
    return c;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    create(arr,6);
    RDisplay(first);
    cout << endl;
    cout << count(first);
}