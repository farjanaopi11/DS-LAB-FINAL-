#include<bits/stdc++.h>
using namespace std;
struct Node *root=NULL;
struct Node{
struct Node *left;
int data;
struct Node *right;
};
int main()
{
  struct Node *n1= new Node();
  n1->left=NULL;
  n1->data=10;
  n1->right=NULL;

  //cout<<n1->data<<"  ";

  struct Node *n2= new Node();
  n2->left=NULL;
  n2->data=5;
  n2->right=NULL;

  n1->left=n2;

  struct Node *n3= new Node();
  n3->left=NULL;
  n3->data=16;
  n3->right=NULL;


  struct Node *tempL= n1;
  while(tempL!=NULL){
    cout<<tempL->data<<" ";
    tempL=tempL->left;
  }

  //cout<<n2->data<<"  ";

  return 0;
}

