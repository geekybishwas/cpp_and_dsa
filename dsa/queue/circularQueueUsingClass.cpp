
#include <iostream>
using namespace std;
class CircularQueue{
    int size;
    int front;
    int rear;
    int *Q;
    public:
        CircularQueue()
        {
            front = rear = 0;
            size = 10;
            Q = new int[size];
        }
        CircularQueue(int size)
        {
            this->size = size;
            Q = new int[this->size];
            front = rear = 0;
        }
        void enqueue(int x);
        int dequeue();
        void display();
};
void CircularQueue::enqueue(int x)
{
    if((rear+1)%size==front)
            cout << "Queue is full";
    else
    {
            rear = (rear + 1) % size;
            Q[rear] = x;
    }
}
int CircularQueue::dequeue()
{
    int x = -1;
    if(front==rear)
            cout << "Queue is empty";
    else
    {
            front = (front + 1) % size;
            x = Q[front];
    }
    return x;
}
void CircularQueue::display()
{
    int i = front + 1;
    do{
            cout << Q[i] << endl;
            i = (i + 1) % size;
    } while (i != (rear + 1) % size);
}
int main()
{
    CircularQueue cq(6);
    cq.enqueue(4);
    cq.enqueue(1);
    cq.enqueue(5);
    cq.enqueue(6);
    cq.enqueue(61);
    cq.dequeue();
    cq.display();
}
 