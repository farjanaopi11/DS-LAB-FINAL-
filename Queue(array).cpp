#include<bits/stdc++.h>
using namespace std;

#define n 5

int a[n];
int head=0;
int tail=0;
int counter;

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


int main()
{

    push(5);
    push(10);
    Print();
    cout<<"\nPop value is "<<pop()<<endl;
    cout<<"\nPop value is "<<pop()<<endl;
    cout<<"\nPop value is "<<pop()<<endl;
    Print();

    return 0;
}

