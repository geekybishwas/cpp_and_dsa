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
    Node *Head;
public:
    LinkedList(int a[], int n);
    void Display();
    void Insert(int index, int n);
    int Lenght();
    int Delete(int index);
};
LinkedList::  LinkedList(int a[],int n){
        Node *p, *t,*last;
        Head = new Node;
        Head->data = a[0];
        Head->next = Head;
        last = Head;
        for (int i = 1; i < n;i++)
        {
            t = new Node;
            t->data = a[i]; 
            t->next =last->next;
            last->next=t;
            last=t;
        }
    }
int LinkedList::Lenght()
{
        Node *p = Head;
        int len = 0;
        do 
        {
            p = p->next;
            len++;
        }while(p->next!=Head);
        return len;
}
void LinkedList::Display()
    {
        Node *h = Head;
        do{
            cout << h->data << " ";
            h = h->next;
        } while (h != Head);
    }
void LinkedList::Insert(int index,int n)
{
        Node *p = Head;
        Node *t;
        if (index < 0 || index>Lenght()) 
        return ;
        t = new Node;
        t->data = n;
        if(index==0)
        {
            if(Head==NULL)
            {
                Head = t;
                Head->next = Head;
            }
            else
            {
            while(p->next!=Head)
                p = p->next;
            p->next = t;
            t->next = Head;
            Head=t;
            }
        }
        else
        {
            for (int i = 0; i < index - 1;i++)
                p = p->next;
            t->next = p->next;
            p->next = t;
        }
}
int LinkedList::Delete(int index)
{
        // Node *p = Head;
        // Node *q;
        // int x;
        // if(index<0 || index>Lenght())
        //     return -1;
        // if (index == 0)
        // {
        //     while(p!=Head)
        //          p = p->next;
        //     x = Head->data;
        //     if(p==Head)
        //     {
        //          delete Head;
        //          Head = NULL;
        //     }
        //     else
        //     {
        //         p->next = Head->next;
        //         delete Head;
        //         Head = p->next;
        //         return x;
        //     }
        // }
        // else{
        //     for (int i = 0; i < index-1; i++)
        //     {
        //         // q = p;
        //         p = p->next;
        //     }
        //     q= p->next;
        //     p->next =q->next;
        //     x = q->data;
        //     delete q;
        // }
        //     return x;
        Node *p = Head;
        Node *q;
        int x;
        if (index < 0 || index > Lenght())
            return -1;
        if(index==1)
        {
           while(p->next!=Head)
               p = p->next;
           x = Head->data;
           if(Head==p)
           {
               delete Head;
               Head = NULL;
           }
           else
           {
               p->next = Head->next;
               delete Head;
               Head = p->next;
           }
        }
        else
        {
            for (int i = 0; i < index - 2;i++)
            {
                p = p->next;
            }
            q = p->next;
            p->next = q->next;
            x = q->data;
            delete q;
        }
        return x;
}
int main()
{
    int a[] = {10, 20, 35, 30, 40};
    LinkedList l(a, 5);
    l.Display();
    // l.Insert(3, 1);
    cout << endl;
    cout << l.Delete(2);
    cout << endl;
    l.Display();
}
// #include <iostream>
// using namespace std;
// class Node
// {
//     public:
//         int data;
//         Node *next;
// };
// class Circular
// {   
//         Node *head;
//     public:
//         Circular()
//         {
//             head->next = NULL;
//         }
//         Circular(int a[], int n);
//         void Insert(int position, int x);
//         void Display();
//         int Length();
// };
// int Circular::Length()
// {
//     Node *p = head;
//     int len = 0;
//     do{
//         len++;
//         p = p->next;
//     } while (p != head);
//     return len;
// }
// void Circular::Insert(int position,int x)
// {
//     Node *p =head;
//     Node *t;
//     t->data = x;
//     if(position<0 || position>Length())
//     if (position == 0)
//     {
//         t = new Node;
//         t->data = x;
//         if(head==NULL)
//         {
//             head = t;
//             head->next = head;
//         }
//         else
//         {
//             while(p->next!=head)
//                 p = p->next;
//             p->next = t;
//             t->next = head;
//             head = t;
//         }
//     }
//     else
//     {
//         for (int i = 0; i < position - 1;i++)
//         {
//             p = p->next;
//         }
//         t->next = p->next;
//         p->next = t;
//     }
// }
// Circular::Circular(int a[], int n)
// {
//     Node *t,*last;
//     head = new Node;
//     head->data = a[0];
//     head->next = head;
//     last = head;
//     for (int i = 0; i < n;i++)
//     {
//         t = new Node;
//         t->data = a[i];
//         t->next =last->next;
//         last->next = t;
//         last = t;

//     }
// }
// void Circular::Display()
// {
//     Node *p = head;
//     do
//     {
//         cout << p->data << endl;
//         p = p->next;
//     } while (p != head);
//     // cout << endl;
// }
// int  main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     Circular c(a, 5);
//     c.Display();
// }