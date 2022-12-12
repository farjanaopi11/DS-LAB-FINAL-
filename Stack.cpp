#include<bits/stdc++.h>
using namespace std;

#define n 5
int a[5];
int top=-1;

bool isFull(){
if(top==n-1){
   return true;
}
return false;
}

void push(int data){
    if(isFull()){
        cout<<"Stack Overflow"<<endl;
    }
    else{
      top++;
      a[top]=data;
    }
}

void printstack(){
for(int i = top ;i>=0;i--){
    cout<<a[i]<<endl;
}
cout<<"\n";
 }
 bool isEmpty(){
if(top<0){
    return true;
}
return false;
 }

int pop(){
    if(isEmpty()){
     cout<<"Stack is empty"<<endl;
    }
    else{
     int value = a[top];
     top--;
     return value;
    }
}
int main(){

push(1);
push(2);
pop();
pop();
pop();
return 0;
}
