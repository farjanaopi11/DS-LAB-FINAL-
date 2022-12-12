#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
public:
    Node *left, *right;
    T data;

    Node(T n)
    {
        left=NULL;
        right=NULL;
        data=n;
    }
};
class BST{
private:
    Node *root;

public:
    BST()
    {
        root=NULL;
    }
    Insert(T data)
    {
        root=Insert(root,data);
    }
    Node *Insert(Node* node, T data)
    {
        if(node==NULL)
        node= new Node(data);
        else
        {
            if(data<= node-> data)
                node->left= Insert(node->left,data);
            else
                node->right= Insert(node->right,data);
        }
        return node;
    }

    void inorder()
    {
        inorder(root);
    }
    void inorder(Node *r)
    {
        if(r!=NULL)
        {
            inorder(r->left);
            cout<<r->data<<"  ";
            inorder(r ->right);
        }
    }
};



int main()
{
  BST<double> bst;
  bst.Insert(10.5);
  bst.Insert(5.5);
  bst.Insert(20.5);
  bst.inorder();


  return 0;
}


