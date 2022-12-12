#include<bits/stdc++.h>
using namespace std;


class Queue{

private:
int n;
int *a;
int head;
int tail;
int counter;

public:
    Queue(){
        n=10;
        a = new int[n];
        head = 0;
        tail = 0;
        counter = 0;
    }


    Queue(int n){
        this->n=n;
        a = new int[n];
        head = 0;
        tail = 0;
        counter = 0;
    }


bool isFull()
{
    return tail==n?true:false;
}

bool isEmpty()
{
    return tail==head?true:false;
}


void push(int value)
{
    if(isFull())
    {
        cout<<"Full\n";
        return;
    }
    else
    {
        a[tail]=value;
        tail++;
        counter++;
    }


}

int pop()
{

    if(!isEmpty())
    {
        int x = a[head];
        head++;
        counter--;
        return x;

    }
    else
    {
        cout<<"Empty"<<endl;
    }
}

void Print()
{
    for(int i=head; i<tail; i++)
    {
        cout<<a[i]<<" ";
    }

}

};

int main(){

Queue q(5);
q.push(10);
q.push(20);
q.push(30);
q.Print();
cout<<endl<<q.pop()<<endl;
q.Print();

return 0;
}
