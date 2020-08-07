#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
};

class queue
{
    private:
        node *front;
        node *rear;   

    public:
        queue()
        {
            front = rear = NULL;
        }

        void enqueue(int data)
        {
            node *temp = new node();
            temp -> data = data;
            temp -> next = NULL;

            if(front == NULL && rear == NULL)
            {
                front = rear = temp;
                return;
            }
            rear -> next = temp;
            rear = temp;
        }

        void dequeue()
        {
            node *temp = front;

            if(front == NULL)
            {
                cout<<"\nQueue is already empty";
            }
            if(front == rear)
            {
                front = rear = NULL;
                cout<<"\nQueue is already empty";
            }
            else
            {
                front = front -> next;
            }
            delete(temp);
            
        }
        
        void print_queue()
        {
            node *temp = front;
            // if(temp)
            while(temp != NULL)
            {
                cout<<temp ->data<<"\t";
                temp = temp -> next;
            }
            cout<<endl;
        }

        /*Just for Debugging purpose*/
        void peek_rear()
        {
            node *temp = rear;
            cout<<"\nThis is rear: "<<rear -> data<<endl;
        }

        /*Just for Debugging purpose*/
        void peek_front()
        {
            node *temp = front;
            cout<<"\nThis is front: "<<front -> data<<endl;
        }
};

int main()
{
    queue *q = new queue();
    q->enqueue(2);
    q->enqueue(4);
    q->enqueue(6);
    q->print_queue();
    q->peek_rear();
    q->peek_front();
    q->dequeue();
    q->print_queue();
    q->peek_rear();
    q->peek_front();
    return 0;
}
