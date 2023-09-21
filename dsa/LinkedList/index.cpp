#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n)
{
    int i;
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n;i++)
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
int Rcount(struct node *p)
{
        if(p!=0)
        {
                return Rcount(p->next) + 1;
        }
        else
                return 0;
}
int rSumNode(struct node *p)
{
        if(p)
        {
                return rSumNode(p->next) + p->data;
        }
        else
        return 0;
}
int sumNode(struct node *p)
{
        int sum = 0;
        while (p != 0)
        {
                sum += p->data;
                p = p->next;
        }
        return sum;
}
int maxInt(struct node *p)
{
        int max = 0;
        while(p!=0)
        {
        if(p->data>max)
        {
                max = p->data;
                p=p->next;
        }
        }
        return max;
}
struct node* Lsearch(struct node *p,int key)
{
        struct node *q = NULL;
        while (p != NULL)
        {
        if(key==p->data)
        {
                q->next = p->next;
                p->next = first;
                first = p;
                return p;
        }
        q = p;
        p = p->next;
        }
        return NULL;
}
void firstValue(struct node *p)
{
cout <<"\nFirst value is " << p->data;
}
void insertData(struct node *p,int index,int data)
{
struct node *t;
if(index<0 || index>count(p))
return;
t = new node;
t->data = data;
if (index == 0)
{
t->next = first;
first = t;
}
else
{
for (int i = 0; i <index - 1;i++)
        p = p->next;
t->next = p->next;
p->next = t;
}
}
void insertNode(struct node *p,int data)
{
struct node *q = NULL;
struct node *t;
t = new node;
t->data = data;
t->next = NULL;
if(first==NULL)
{
first = t;
}
else
{
while(p && p->data<data)
{
q=p;
p = p->next;
}
if(p==first)
{
t->next = first;
first = t;
}
else{
t->next = q->next;
q->next = t;
}
}
}
int deleteE(struct node *p,int index)
{
struct node *q = NULL;
int x;
if (index < 1 || index > count(p))
return -1;
if(index==1)
{
x =first->data;
first = first->next;
delete p;
return x;
}
else
{
for (int i = 0; i < index - 1;i++)
{ 
q = p;
p = p->next;
}
q->next = p->next;
x=p->data;
delete p;
return x;
}
}
int isSorted(struct node *p)
{
int x=-1;
while(p!=NULL)
{
if (p->data < x)
return 0;
x = p->data;
p = p->next;
}
return 1;
}
int main()
{
    // struct node *first=NULL;
struct node *temp;
int a[] = {1, 3,53,12,5,15,55};
// Creating linked list
create(a, 7);
display(first);
insertData(first, 1, 90);
cout << "-------";
display(first);
// cout << "Delete element is " << deleteE(first, 2) << endl;
// display(first);
// if(isSorted(first))
// cout << "Is sorted";
// else
// cout << "Not sorted";
// cout << "Counting is " << count(first) << endl;
// cout << "Counting is by Recursion " << Rcount(first) << endl;
// cout << "Sum is " << sumNode(first) << endl;
// cout << "Sum is by Recursion " << rSumNode(first) << endl;
// cout << "Max number is " << maxInt(first);

// For searching
// temp = Lsearch(first, 41);
// if (temp)
// cout << "Key found " << temp->data;
// else cout<<"Key not found "<<temp->data;
// firstValue(first);
// insertData(first, 0, 10);
// insertData(first, 1, 18);
// display(first);
// insertNode(first, 11);
// display(first);
}