#include <iostream>
using namespace std;
class Queue
{
    int rear;
    int front;
    int size;
    int *Q;

public:
    Queue()
    {
        rear = front = -1;
        size=10;
        Q = new int[this->size];

    }
    Queue(int size)
    {
        rear = front = -1;
        this->size = size;
        Q = new int[size];
    }
    void enqueue(int x);
    int dequeue();
    void display();
};
void Queue::enqueue(int x)
{
    if(rear==size-1)
        cout << "Queue is full";
    else
    {
        rear++;
        Q[rear] = x;
    }
}
int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
        cout << "Queue is empty";
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}
void Queue::display()
{
    for(int i=front+1;i<=rear;i++)
    {
        cout << Q[i] << " ";
    }
}
int main()
{
    Queue q(4);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
}