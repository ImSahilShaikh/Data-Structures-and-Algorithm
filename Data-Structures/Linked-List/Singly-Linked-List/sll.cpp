#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void printlist(Node *head)
{
    while(head != NULL)
    {
        cout<< head -> data<<"\t";
        head = head -> next;
    }
    cout<<"\n";
}

int accept_data()
{   
    int temp=0;
    cout<<"\nEnter the data to insert in your node: ";
    cin>>temp;
    return temp;
}

void print_usingrecursion(Node *head)
{
    if(head == nullptr)
        return;
    cout<<head->data<<"\t";
    print_usingrecursion(head->next);
}

Node* insert_node(Node *head)
{
    Node *temp = new Node;
    temp -> data = accept_data();
    temp -> next = NULL;

    if (head == NULL)
    {
        head = temp;
        return head;
    }
    Node *curNode = head;
    while(curNode->next != NULL)
    {
        curNode = curNode -> next;
    }
    curNode -> next = temp;
    return head;
}

Node* delete_last_node(Node* head)
{
    Node *temp = head;
    while (temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    delete(temp->next);
    temp->next = NULL;

    return head;
}

Node *delete_first_node(Node *head)
{
    Node *temp=head;
    head = temp->next;
    
    delete(temp);

    return head;
}

Node *insert_at_first(Node *head)
{
    Node *temp = new Node;
    temp ->data = accept_data();
    temp ->next = head;
    head = temp;

    return head;
}

void print_reverse(Node *head)
{
    if(head == nullptr)
    {
        return;
    }
    print_reverse(head->next);
    cout<<head->data<<"\t";
}

Node* reverse(Node *head)
{
    Node *cur = head;
    if(cur == nullptr)
    {
        head = cur;
    }
    else
    {   
        reverse(cur -> next);
        Node * tmp = cur->next;
        tmp->next = cur;
        cur->next = nullptr;
    }
    return cur;
}

int main()
{
    Node *head = NULL;
    Node *deleted_node = NULL;
    //int data=accept_data();
    head = insert_node(head);
    printlist(head);
    
    head = insert_node(head);
    printlist(head);
    
    head = insert_node(head);
    printlist(head);
    
    // head = delete_last_node(head);
    // printlist(head);
    
    // head = delete_first_node(head);
    // printlist(head);

    head = insert_at_first(head);
    printlist(head);

    cout<<"\n-------------Printing using recursion-------------"<<endl;
    print_usingrecursion(head);

    cout<<"\n-------------Printing using recursion in reverse-------------"<<endl;
    print_reverse(head);

    cout<<"\n-------------Reversing LL using recursion-------------"<<endl;
    head = reverse(head);
    printlist(head);
}
