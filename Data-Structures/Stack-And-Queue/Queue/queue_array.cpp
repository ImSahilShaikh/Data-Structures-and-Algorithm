#include <iostream>
using namespace std;
#define max 10

class Queue
{
private:
    int queue[max];
    int front, rear;

public:
    Queue()
    {
        front = rear = -1;
    }

    bool isFull()
    {
        return (rear == max);
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    void enqueue(int data)
    {
        if (isFull())
        {
            cout << "\nQueue is Full\n";

            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        queue[rear] = data;
    }
    void dequeue()
    {
        if (isEmpty() )
        {
            cout << "\nQueue is already empty";
            return;
        }
        if (front == rear)
        {
            rear = front = -1;
        }
        else
        {
            front = front + 1;
        }
    }

    int peek()
    {
        if (front == -1)
        {
            cout << "\nEmpty queue, cannot return the front element!!!!!!!";
            return -1;
        }
        return queue[front];
    }

    void print_queue()
    {
        //int n = (rear - front) + 1;
        for (int i = front; i < rear+1; i++)
        {
            cout<<" i: "<<i;
            if(!isEmpty())
            {
                cout<<"Element : " << queue[i] << "\n";
            }
            
        }
    }
};

int main()
{
    Queue q;

    cout<<"\nEnqueueing 1,3 and 5\n";
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);

    q.print_queue();

    // cout<<"\nPeek\n";
    // cout<< q.peek();

    cout<<"\nDequeueing two elements\n";
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.print_queue();

}