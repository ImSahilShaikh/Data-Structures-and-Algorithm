#include<iostream>
#include<stack>
#include<queue>

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
        recursive_search(root->left,key);
    }
    else
    {
        recursive_search(root->right,key);
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

void levelOrder(treeNode *root)
{
    if(root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    queue<treeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        treeNode *current = q.front();
        cout<<current->data<<"\t";
        if(current->left != NULL)
            q.push(current->left);
        if(current->right != NULL)
            q.push(current->right);
        q.pop();
    }
}

int height_recursive(treeNode *root)
{
    if(root == NULL)
    {
        return -1;
    }
    int left_height = height_recursive(root->left);
    int right_height = height_recursive(root->right);

    return max(left_height, right_height) + 1;
}

int iterative_min(treeNode *root)
{
	if(root == NULL)
	{
		return -1;
	}
	while(root->left != NULL)
	{
		root = root -> left;
	}
	return root->data;
}

int iterative_max(treeNode *root)
{
	if(root==NULL)
	{
		return -1;
	}
	while(root->right != NULL)
	{
		root = root -> right;
	}
	return root->data;
}

int recursive_min(treeNode *root)
{
	if(root == NULL)
	{
		return -1;
	}
	else if(root->left == NULL)
		return root->data;

	return recursive_min(root->left);	
}

int recursive_max(treeNode *root)
{
	if(root == NULL)
	{
		return -1;
	}
	else if(root->right == NULL)
		return root->data;
	
	return recursive_max(root->right);
}

void printLeafNodes(treeNode *root)
{
    if(root == nullptr)
    {
        cout<<"\nTree is empty!!";
        return;
    }
    if(root->left == nullptr && root->right == nullptr)
    {
        cout<<root->data<<"\t";
    }
    if(root->left)
    {
        printLeafNodes(root->left);
    }
    if (root->right)
    {
        printLeafNodes(root->right);
    }   
}

void mirror(treeNode *root)
{
    if(root == nullptr)
        return;

    mirror(root->left);
    mirror(root->right);

    treeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
}

void ipreorder(treeNode *root)
{
    if(root == nullptr)
    {
        return;
    }
    stack<treeNode*> s;
    s.push(root);

    while(!s.empty())
    {
        treeNode* curNode = s.top();
        cout<<curNode->data<<"\t";
        s.pop();

        if(curNode->right)
        {
            s.push(curNode->right);
        }
        if(curNode->left)
        {
            s.push(curNode->left);
        }
    }
}

void iinorder(treeNode *root)
{
    stack<treeNode*>s;
    treeNode *curNode = root;
    while(!s.empty() || curNode != nullptr)
    {
        while (curNode !=nullptr)
        {
            s.push(curNode);
            curNode = curNode -> left;
        }
        curNode = s.top();
        s.pop();
        cout<<curNode->data<<"\t";

        curNode = curNode -> right;
    }
}
int main()
{
    treeNode *root = NULL;
    root = insert(root,5);//                            5                          
    root = insert(root,1);//						1		7
    root = insert(root,7);//							3		8
    root = insert(root,8);//						2		4		9
    root = insert(root,9);
    root = insert(root,3);
    root = insert(root,2);
    root = insert(root,4);

    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    preOrder(root);

    // cout<<endl<<"Searching 7.."<<endl;
    // recursive_search(root,7);

    // cout<<endl<<"Searching 9.."<<endl;
    // iterative_search(root,9);

    // cout<<"LEVEL ORDER"<<endl;
    // levelOrder(root);

    // cout<<endl<<"Height"<<endl;
    // int h = height_recursive(root);
    // cout<<h<<endl;

	// int min = iterative_min(root);
	// cout<<endl<<"Minimum element is: "<<min<<endl;

	// int max = iterative_max(root);
	// cout<<endl<<"Maximum element is: "<<max<<endl;

	// int min1 = recursive_min(root);
	// cout<<endl<<"Minimum element is: "<<min1<<endl;

	// int max1 = recursive_max(root);
	// cout<<endl<<"Maximum element is: "<<max1<<endl;

    // cout<<"\nLEAFT NODES ARE: "<<endl;
    // printLeafNodes(root);

    // mirror(root);
    // cout<<endl<<"AFTER MIRROR!"<<endl;

    // inOrder(root);
    // cout<<endl;
    // postOrder(root);
    // cout<<endl;
    // preOrder(root);

    cout<<"\nThis is iterative preorder"<<endl;
    ipreorder(root);

    cout<<"\nThis is iterative inorder"<<endl;
    iinorder(root);
    return 0;
}