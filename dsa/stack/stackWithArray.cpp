#include <iostream>
using namespace std;
struct Stack
{
    int top;
    int size;
    int *S;
};
void create(struct Stack *st)
{
    cout << "Enter size" << endl;
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
}
void Display(struct Stack st)
{
    for (int i = st.top; i >= 0;i--)
    {
        cout << st.S[i]<<" ";
    }
}
void push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
        cout << "Stack overflow" << endl;
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(struct Stack *st)
{
    int x = -1;
    if(st->top==-1)
        cout << "Stack underflow" << endl;
    else{
        x = st->S[st->top--];
        // st->top--;
    }
    return x;
}
int peek(struct Stack st,int pos)
{
    int x = -1;
    if ((st.top - pos + 1) < 0)
        cout << "Invalid position" << endl;
    else
    {
        x = st.S[st.top - pos + 1];
    }
    return x;
}
int isEmpty(struct Stack st)
{
int x=(st.top==-1)?1:0;
return x;
}
int isFull(struct Stack st)
{
int x = st.top == st.size - 1 ? 1 : 0;
return x;
}
int main()
{
    struct Stack st1;
    create(&st1);
    push(&st1, 1);
    push(&st1, 2);
    push(&st1, 3);
    push(&st1, 5);
    cout <<"Pop out value " <<pop(&st1)<<endl;
    Display(st1);
    cout << "Position of 2 is " << peek(st1, 2) << endl;
    cout << isFull(st1) << endl;
    cout << isEmpty(st1);
}