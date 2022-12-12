#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Stack{
private:
    int top;
    T *a;
    int s;
public:
    Stack(){
     top = -1;
     s=10;
     a=new T[s];
    }
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
struct Student{
int id;
string name;
double cgpa;
};

int main(){
    Student s1={100,"X",3.8};
    Student s2={101,"Y",3.8};
    Stack<Student> St;
    St.push(s1);
    St.push(s2);

    Student s3=St.pop();
    cout<<s3.id<<" "<<s3.name<<" "<<s3.cgpa;
return 0;
}

