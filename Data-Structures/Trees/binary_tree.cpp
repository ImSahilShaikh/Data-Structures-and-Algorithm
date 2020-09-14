#include<iostream>
using namespace std;

class treeNode{
    int data;
    treeNode *left;
    treeNode *right;
};

class BinaryTree
{
    treeNode *root;

    private:
        BinaryTree()
        {
            root = NULL;
        }

        void insert()
        {
            int data =0;
            cout<<"\nEnter the data to be inserted: ";
            cin>>data;
            if(data == -1)
            {
                return NULL;
            }
            if (root  == NULL)
            {
                root = new treeNode();
            }
            root->data = data;
            root->left = insert();
            root->right = insert();
        }
        void InOrder()
        {
            while(root!=NULL)
            {
                
            }
        }
}

int main()
{
    return 0;
}