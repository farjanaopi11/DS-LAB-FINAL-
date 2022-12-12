#include<bits/stdc++.h>
using namespace std;


struct Node {
int data;
Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void enQue(int value){
Node *newNode = new Node();
newNode->data=value;
newNode->next = NULL;
if(head ==NULL){
    head = newNode;
    tail =newNode;
}
else{
    tail->next = newNode;
    tail = newNode;
}
}

void deQue(){
    Node *temp = head;
    head = head->next;
    delete(temp);

}

void printQueue(){
Node *temp = head;
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
}
cout<<".........."<<endl;
}


int main(){
 enQue(10);
 enQue(20);
 enQue(30);
 enQue(40);
 printQueue();
 deQue();
 printQueue();



return 0;
}


