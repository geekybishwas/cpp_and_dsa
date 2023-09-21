#include <iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
} q1;

void create(struct Queue *q,int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int(q->size);
}
void enqueue(Queue *q,int x)
{
if(q->rear==q->size-1)
    cout << "Queue is full\n";
else{
    q->rear++;
    q->Q[q->rear] = x;
}
}
int dequeue(Queue *q)
{
    int x = -1;
    if(q->front==q->rear)
        cout << "Queue is empty\n";
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
void Display(Queue *q)
{
    while(q->front!=q->rear)
    {
        q->front++;
        cout << q->Q[q->front] << " ";
    }
}
int main()
{
    create(&q1, 3);
    enqueue(&q1,4);
    enqueue(&q1, 3);
    enqueue(&q1,5);
    Display(&q1);
}