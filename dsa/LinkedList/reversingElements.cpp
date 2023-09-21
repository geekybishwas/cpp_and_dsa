#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first = NULL,*second=NULL;
void create(int a[],int n)
{
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n;i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void create1(int a[],int n)
{
    struct node *t, *last;
    second = new node;
    second->data = a[0];
    second->next = NULL;
    last = second;
    for (int i = 1; i < n;i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
while(p!=NULL)
{
        cout<<p->data<<endl;
        p = p->next;
}
}
int count(struct node *p)
{
int a = 0;
while(p!=0)
{
        a++;
        p = p->next;
}
return a;
}
// By using method of reversing links
void reverseByReversingLinks(struct node *p) 
{
struct node *q,*r;
q = r = NULL;
while(p!=NULL)
{
        r = q;
        q = p;
        p = p->next;
        q->next = r;
}
first = q;
}
void reverseByReversingElements(struct node *p, int n)
{
int a[n];
int i = 0;
while(p!=NULL)
{
        a[i] = p->data;
        p = p->next;
        i++;
}
p = first;
i--;
// i = 0;
while (p != NULL)
{
        p->data = a[i--];
        p = p->next;
}
}
int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int b[] = {5, 6, 7, 8, 9};
    create(a, 6);
    create1(b, 5);
    display(first);
    cout << "----------" << endl;
    display(second);
    cout << "----------" << endl;
    //     display(first);
    //     cout << "----------" << endl;
    //     int n1= sizeof(a)/sizeof(a[0]);
    //     reverseByReversingElements(first,n1);
    //     display(first);
}