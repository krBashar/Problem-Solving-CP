#include<iostream>
#define size 20
using namespace std;

class Stack
{
    int s[size];
    int top=-1; //Holds the index of the top value

public:
    int push(int value)
    {
        //If full then print "Stack is full" and return -1
        //If not full then insert and return 1
        if(top == size-1)
        {
            cout<<"Stack is Full! Can't push"<<endl;
            return -1;
        }

        s[++top]= value;
        return 1;
    }


    int pop()
    {
        //If not empty then return the top value
        //If empty then print "Stack is empty" and return -1
        if(top == -1)
        {
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }

        else
        {
            int top_value;
            top_value = s[top];
            s[top] = 0;
            top--;
            return top_value;
        }

    }
};



class Queue
{
    int Q[size];
    int Front = -1;
    int Rear = -1;

public:
    int enqueue(int value)
    {
        //If full then print "Queue is full" and return -1
        //If not full then insert and return 1
        if(Rear == (size-1))
        {
            cout<<"Queue is full"<<endl;
            return -1;
        }
        else if(Front==-1 && Rear==-1)
        {
            Front = 0;
            Rear = 0;
            Q[Rear]=value;
            return 1;
        }

        else
        {
            Rear++;
            Q[Rear]=value;
            return 1;
        }

    }

    int dequeue()
    {
        //If not empty then return the Dequeued value
        //If empty then print "Queueue is empty" and return -1
        if(Front==-1 && Rear==-1)
        {
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        else if(Front == Rear)
        {
            int d_value = Q[Front];
            Front = -1;
            Rear = -1;
            return d_value;
        }
        else
        {
            int d_value = Q[Front];
            Front++;
            return d_value;
        }
    }
};




int main()
{
    Stack s;
    Queue Q;

    s.push(5);
    s.push(9);
    s.push(3);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;


    Q.enqueue(5);
    Q.enqueue(8);
    Q.enqueue(9);
    cout<<Q.dequeue()<<endl;
    cout<<Q.dequeue()<<endl;
    cout<<Q.dequeue()<<endl;
    cout<<Q.dequeue()<<endl;


    return 0;
}
