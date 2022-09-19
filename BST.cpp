

#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;
};

class BST
{
    node *root=NULL;
    public:

    node * getRoot(){return root;}
    void setRoot(node *n){root = n;}

    void _insert(int value)
    {
        node *n = new node;
        n->data = value;
        n->left = NULL;
        n->right = NULL;

        if(root==NULL)
        {
            root = n;
        }
        else
        {
            node *temp = root;
            while(true)
            {
                if(temp->data==value)
                {
                    break;
                }
                else if(temp->data > value)
                {
                    if(temp->left == NULL)
                    {
                        temp->left = n;
                        break;
                    }
                    else
                    {
                        temp = temp->left;
                    }
                }
                else if(temp->data < value)
                {
                    if(temp->right == NULL)
                    {
                        temp->right = n;
                        break;
                    }
                    else
                    {
                        temp = temp->right;
                    }
                }
            }
        }
    }


    bool Searching(int value)
    {
        node *temp=root;

        while(temp!=NULL)
        {
            if(temp->data == value)
            {
                cout<<"Value Found"<<endl;
                return true;
            }
            else if(temp->data > value)
            {
                temp = temp->left;
            }
            else if(temp->data < value)
            {
                temp = temp->right;
            }
        }

        cout<<"Not found"<<endl;
        return false;
    }


    node * preorder(node *n)
    {
        if(n==NULL)
        {
            return NULL;
        }

        cout<<n->data <<", ";
        preorder(n->left);
        preorder(n->right);

    }

    node * findMin(node *n)
    {
        if(n->left == NULL)
            return n;
        return findMin(n->left);
    }

    node * findMax(node *n)
    {
        if(n->right == NULL)
            return n;
        return findMax(n->right);
    }


    node * _delete(node *n, int key)
    {
        if(n==NULL)
            return n;

        if(n->data==key)
        {
            //Write the code for deletion

            if(n->left ==NULL && n->right==NULL) //Delete a Leaf Node
            {
                delete n;
                return NULL;
            }
            else if(n->left == NULL) //Node with one child
            {
                node *temp=n->right;
                delete n;
                return temp;
            }
            else if(n->right == NULL) //Node with one child
            {
                node *temp=n->left;
                delete n;
                return temp;
            }
            else  //Node with two child
            {
                node * temp = findMin(n->right);
                n->data = temp->data;
                n->right = _delete(n->right,temp->data);
            }

        }
        else if(n->data>key)
        {
            n->left = _delete(n->left,key);
        }
        else if(n->data<key)
        {
            n->right = _delete(n->right,key);
        }

        return n;
    }
};

int main()
{
    int arr[] = { 9, 2, 5, 3, 8, 11, 20, 1, 4};
    BST bst;


    int i;
    for(i=0; i<9; i++)
    {
        bst._insert(arr[i]);
    }

    bst.preorder(bst.getRoot());

    cout<<bst.Searching(5)<<endl;
    cout<<bst.Searching(50)<<endl;
    node *n = bst.findMin(bst.getRoot());
    cout<<"Min Value: "<<n->data<<endl;
    n = bst.findMax(bst.getRoot());
    cout<<"Max Value: "<<n->data<<endl;
    bst.setRoot(bst._delete(bst.getRoot(),11));
    bst.preorder(bst.getRoot());


    return 0;
}
