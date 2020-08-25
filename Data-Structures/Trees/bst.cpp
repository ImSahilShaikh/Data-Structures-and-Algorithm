#include<iostream>

using namespace std;

struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
};

treeNode* getNode(int data)
{
    treeNode *newNode = new treeNode();
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

void recursive_search(treeNode *root, int key)
{
    if(root == NULL)
    {
        cout<<"No data is present"<<endl;
        return;
    }
    else if(key == root->data)
    {
        cout<<"Data found"<<endl;
    }
    else if(key < root->data )
    {
        search(root->left,key);
    }
    else
    {
        search(root->right,key);
    }
}

void iterative_search(treeNode *root, int key)
{
    if(root == NULL)
    {
        cout<<"No data is present"<<endl;
        return;
    }
    while(root != NULL)
    {
        if(root->data == key)
        {
            cout<<"Data Found"<<endl;
            return;
        }
        else if(key < root->data)
        {
            root = root -> left;
        }
        else
        {
            root = root -> right;
        }
    }
    cout<<"No data found"<<endl;
}

treeNode* insert(treeNode *root,int data)
{
    if(root == NULL)
    {
        root = getNode(data);
    }
    else if (data <= root -> data)
    {
        root -> left = insert(root->left,data);
    }
    else
    {
        root -> right = insert(root->right,data);
    }
    return root;
}

void inOrder(treeNode *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        cout<<root -> data<<"\t";
        inOrder(root->right);
    }
}

void postOrder(treeNode *root)
{
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root -> data<<"\t";
    }
}

void preOrder(treeNode *root)
{
    if(root != NULL)
    {
        cout<<root -> data<<"\t";
        preOrder(root->left);
        preOrder(root->right);
    }
}


int main()
{
    treeNode *root = NULL;
    root = insert(root,5);
    root = insert(root,1);
    root = insert(root,7);
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    preOrder(root);

    cout<<endl<<"Searching 7.."<<endl;
    recursive_search(root,7);

    cout<<endl<<"Searching 9.."<<endl;
    iterative_search(root,9);
    return 0;
}