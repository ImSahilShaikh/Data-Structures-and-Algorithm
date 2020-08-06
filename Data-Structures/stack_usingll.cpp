#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* push(Node *head,int d)
{
    Node* temp = new Node;
    temp -> data = d;
    temp -> next = head;
    head = temp;
    
    return head;
}

void printStack(Node *head)
{
    while(head != NULL)
    {
        cout << head-> data<<"\n";
        head = head->next;
    }
}

Node* pop(Node* head)
{
    if(head!=NULL)
    {
        Node* temp = head;
        head = temp -> next;
        
        delete(temp);
    }
    else
    {
        cout<<"\nStack Underflow";
    }
    
    return head;
}

int main()
{
    Node* top = new Node;
    top = NULL;

    cout<<"\nPushing 3, 4 and then 7: \n";

    top = push(top,3);
    top = push(top,4);
    top = push(top,7);


    printStack(top);

    cout<<"\nPopping top element times 4: \n";
    top = pop(top);
    top = pop(top);
    top = pop(top);
    top = pop(top);

    printStack(top);

    return 0;
}
