#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

void printList(Node *head)
{
    while(head!=NULL)
    {
        cout<< head->data<<"\t";
        head = head->next;
    }
    cout<<endl;
}

void printReverse(Node *head)
{
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    while (temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp -> prev;
    }
    cout<<endl;
}

Node* createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

Node *insert_first(Node *head,int x)
{
    Node *temp = createNode(x);
    if(head==NULL)
    {
        head = temp;
        return head;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;

    return head;
}

Node *delete_first(Node *head)
{
    if(head == NULL)
    {
        cout<<"List is already empty!"<<endl;
        return head;
    }
    Node *temp = head;
    head = temp->next;

    delete(temp);

    return head;
}

Node *delete_last(Node *head)
{
    Node *temp = head;
    if(head==NULL)
    {
        cout<<"List is already empty!"<<endl;
        return head;
    }
    while(temp->next!=NULL)
    {
        temp = temp -> next;
    }
    temp->prev->next = NULL;
    delete(temp);
    return head;
}

Node *insert_end(Node*head,int x)
{
    Node *node = createNode(x);
    Node *temp = head;
    if(head == NULL)
    {
        head = node;
        return head;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;

    return head;
}

int main()
{
    Node *head = NULL;
    head = insert_end(head,2);
    head = insert_end(head,3);
    head = insert_end(head,5);
    head = insert_first(head,1);
    
    cout<<"Forward"<<endl;
    printList(head);

    head = delete_first(head);
    printList(head);

    head = insert_first(head,11);
    printList(head);
    
    head = delete_last(head);
    printList(head);
    
    cout<<"Reverse"<<endl;
    printReverse(head);

    return 0;
}