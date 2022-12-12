#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Stack{
private:
    int top;
    T *a;
    int s;
public:
    Stack(int n){
     top = -1;
     s=n;
     a = new T[n];
    }
bool isFull(){
if(top==s-1){
   return true;
}
return false;
}

void push(T data){
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

T pop(){
    if(isEmpty()){
     cout<<"Stack is empty"<<endl;
    }
    else{
     T value = a[top];
     top--;
     return value;
    }
}

};



int main(){
    int n=10;
Stack<string> s(n);
s.push("X");
s.push("Y");
s.push("Z");
s.printstack();
return 0;
}
