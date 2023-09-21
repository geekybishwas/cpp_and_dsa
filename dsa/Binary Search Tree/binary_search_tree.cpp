#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
}*root=NULL;
void Insert(int key)
{
        struct Node *t = root;
        struct Node *r ,*p;
        if(root==NULL)
        {
            p = new Node;
            p->data = key;
            p->lchild = p->rchild = NULL;
            root = p;
            return;
        }
        while(t!=NULL)
        {
            r = t;
            if(key<t->data)
            {
                t = t->lchild;
            }
            else if(key>t->data)
            {
                t = t->rchild;
            }
            else
                return;
        }
        p = new Node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        if(key<r->data)
            r->lchild = p;
        else
            r->rchild = p;
}
int Search(int key)
{
        struct Node *t = root;
        while(t!=NULL)
        {
            if(key<t->data)
                t = t->lchild;
            else if(key>t->data)
                t = t->rchild;
            else
                return t->data;
        }
        return 0;
}
void Inorder(struct Node *p)
{
    if(p)
    {
            Inorder(p->lchild);
            cout << p->data<<endl;
            Inorder(p->rchild);
    }
};
int main()
{
        Insert(10);
        Insert(5);
        Insert(20);
        Insert(2);
        Insert(9);
        Inorder(root);
        int find = Search(77);
        if (find)
            cout << "Value found " << find << endl;
        else
            cout << "Element not found";
}