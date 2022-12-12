#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Queue
{
private:
    int n;
    T *A;
    int head;
    int tail;
    int coun;

public:
    Queue(){cout<<"Default Constructor."<<endl;}
    Queue(int n)
    {
    this->n=n;
    n=10;
     A= new T[n];
    head=0;
    tail=0;
    coun=0;
    }


bool isFull()
{
if(tail==n-1)
{
return true;
}
else
{
return false;
}
}

bool isEmpty()
{
if (head==tail)
{
return true;
}
else
{
return false;
}
}
enqueue(T value)
{
if(isFull())
{
cout<<"Queue is Full"<<" ";
}
else
{
A[tail]=value;
tail++;
coun++;
}
}

T dequeue()
{
if(!isEmpty())
{

T x=A[head];
head++;
coun--;
return x;
}
else
{
cout<<"Queue is Empty"<<" ";
}
}

void print()
{
for(int i=head; i<tail;i++)
{
cout<<A[i]<<" ";
}
cout<<"\nNumber of elements in the queue is "<<coun<<endl;
}
};

int main()
{
Queue <string>q(5);
q.enqueue("Hello.");
q.enqueue("HI");
q.enqueue("World");
q.print();
cout<<"\nPop Value is "<<q.dequeue()<<endl;
q.print();
}
