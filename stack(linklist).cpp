#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
struct Node* next;
};

struct Node * head=NULL;

void push(int value)
{

struct Node *n1;
n1= new Node();
n1->data=value;
n1->next=NULL;

if(head==NULL)
{
head=n1;
}
else
{
n1->next=head;
head=n1;
}
}

void pop()
{
struct Node * temp=head;
head=temp->next;
delete(temp);
}

int stackSize()
{
int counter=0;
struct Node * temp=head;
while(temp!=NULL)
{
counter++;
temp=temp->next;
}
return counter;
}

int top()
{
return head->data;
}

int stackSum()
{
int sum=0;
struct Node * temp=head;
while(temp!=NULL)
{
sum=sum+temp->data;
temp=temp->next;
}
return sum;
}

void printStack()
{
struct Node * temp=head;

while(temp!=NULL)
{
cout<<temp->data<<endl;
temp=temp->next;
}
cout<<"................"<<endl;
}

int main()
{
push(10);
push(20);
push(30);
push(40);
push(50);

printStack();

cout<<stackSize()<<endl;
cout<<top()<<endl;
cout<<stackSum()<<endl;
cout<<stackSum()/stackSize()<<endl;


return 0;
}