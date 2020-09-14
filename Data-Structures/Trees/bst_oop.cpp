#include<iostream>
using namespace std;

class treeNode{
    public:
        int data;
        treeNode *left;
        treeNode *right;
};

class bst{
    treeNode *root;
    public:
        bst()
        {
            root = NULL;
        }
        
        treeNode *getNode(int data)
        {
            treeNode *newNode = new treeNode();
            root -> data = data;
            root -> left = root -> right = NULL;

            return root;
        }

        treeNode* insert(treeNode* root,int data)
        {
            if(root == NULL)
            {
                root = getNode(root,data);
            }
            else if(data <= root->data)
            {
                root -> left = insert(root,data);
            }
            else
            {
                root -> right = insert(root,data);
            }
            return root;
        }

        void inOrder(treeNode *root)
        {
            if(root != NULL)
            {
                root->left.inOrder();
                cout<<root->data<<"\t";
                root->right.inOrder();
            }
        }
};

int main()
{
    bst *tree = new bst();
    tree->insert(5);
    tree->insert(7);
    tree->insert(1);
    // tree->inOrder();
    return 0;
}