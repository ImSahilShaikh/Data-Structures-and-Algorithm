#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class SLL
{
private:
    Node *head;

public:
    SLL()
    {
        head = NULL;
    }

    ~SLL()
    {
        cout << "Inside destructor";
        Node *current = NULL;
        while (head != NULL)
        {
            current = head;
            head = head->next;
            delete current;
        }
    }

    void insert_start(int data)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            Node *curNode = head;
            while (curNode->next != NULL)
            {
                curNode = curNode->next;
            }
            curNode->next = temp;
        }
    }

    void delete_end()
    {
        Node *temp = head;
        if (temp == NULL)
        {
        }
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete (temp->next);
        temp->next = NULL;
    }

    void delete_front()
    {
        Node *temp = head;
        head = temp->next;

        delete (temp);
    }
    
    void insert_at_n(int data,int loc)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;

        if(loc == 1)
        {
            temp->next = head;
            head = temp;
            cout<<"Node inserted successfulyy!"<<endl;
            return;
        }

        Node *curNode = head;
        for(int i=1;i<loc-1;i++)
        {
            curNode = curNode -> next;
            if(curNode == NULL)
            {
                cout<<"Please enter proper location!"<<endl;
                return;
            }
        }
        
        temp->next = curNode -> next;
        curNode->next = temp;
        cout<<"Node inserted successfulyy!"<<endl;
    }
    
	void delete_at_n(int loc)
        {
            Node *temp = head;
            if(loc == 1)
            {
                head = temp -> next;
                delete(temp);
                cout<<"\nNode deleted Successfully!";
                return;
            }
            for(int i=1;i<loc-1;i++)
            {
                
                temp = temp -> next;  
                if(temp == NULL || temp->next == NULL)
                {
                    cout<<"Please enter proper location!!!!!"<<endl;
                    return;
                }              
            }
            Node *temp2 = temp -> next; //nth node
            temp->next = temp2->next; //n+1 node
            delete(temp2);
            cout<<"\nNode deleted Successfully!"<<endl;
        }

    void print_list()
    {
        if (head == NULL)
        {
            cout << "\nList is Empty" << endl;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << "\t";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    SLL *list1 = new SLL();
    list1->insert_start(2);
    list1->insert_start(3);
    list1->print_list();
    // list1->delete_end();
    list1->delete_front();
    list1->print_list();
    return 0;
}
