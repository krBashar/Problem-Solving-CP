#include<iostream>
#define size 20
using namespace std;


class Stack
{
    int s[size];
    int top=-1;

public:
    int push(int value)   //Modify InsertAtLast()
    {
        //Check whether stack is full. If full then print "Can't insert! stack is full" and return -1.
        //If not full, then save the value at index top+1 and return 1
        if(top == size-1)
        {
            cout<<"Can't insert! Stack is Full\n";
            return -1;
        }

        top++;
        s[top]=value;

        return 1;
    }

    int pop() //Modify deleteAtLst
    {
        //check whether the stack is empty. If empty then print "Can't delete! stack is empty" and return -1.
        //If not empty then save the value of top index and decrease the top by 1 and return the saved value

        if(top==-1)
        {
            cout<<"Can't delete! Stack is empty\n";
            return -1;
        }

        int temp;
        temp = s[top];
        top--;
        return temp;
    }


    bool isEmpty()
    {
        if(top ==-1)
            return true;
        else
            return false;
    }

};


class Queue
{
    int Q[size];
    int Front = -1;
    int Rear = -1;

public:
    int enqueue(int value)  // Modify insertAtLast
    {
        //Check whether queue is full. If full then print "Can't insert! queue is full" and return -1.
        //If not full, then save the value at index rear+1 and return 1

        if((Rear+1)%size == Front)
        {
            cout<<"Can't insert! Queue is Full\n";
            return -1;
        }

        Rear = (Rear+1)%size;
        Q[Rear]=value;
        if(Front == -1)
        {
            Front++;
        }
        return 1;
    }

    int dequeue()   //Take help from from deleteAtFirst. Omit shifting part
    {
        //Check whether Queue is empty. If empty then print "Can't delete! queue is empty" and return -1.
        //If not empty then save the value of front
        //if front<rear than increase front by 1 and return the saved value
        //if front == rear make front =-1, rear=-1 and return the saved value

        if(Front == -1 && Rear == -1)
        {
            cout<<"Can't delete! Queue is empty\n";
            return -1;
        }

        int temp;
        temp = Q[Front];

        if(Front == Rear)
        {
            Front =-1;
            Rear = -1;
        }

        else
        {
            Front = (Front+1)%size;
        }

        return temp;
    }

    bool isEmpty()
    {
        if(Front == -1 & Rear ==-1)
            return true;
        else
            return false;
    }

};

int main()
{
    /*Stack myStack;
    myStack.push(50);
    myStack.push(10);
    myStack.push(40);
    cout<<myStack.pop()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<myStack.pop()<<endl;*/

    Queue myQueue;
    myQueue.enqueue(30);
    myQueue.enqueue(10);
    myQueue.enqueue(40);
    cout<<myQueue.dequeue()<<endl;
    cout<<myQueue.dequeue()<<endl;
    cout<<myQueue.dequeue()<<endl;

    return 0;
}
