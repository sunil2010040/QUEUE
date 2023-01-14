#include<iostream>
using namespace std;

#define n 100

class queue
{
    int*arr;
    int front;
    int back;
    
    public:
    queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }
    
    void enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"queue overflow";
            return;
        }
        
        else if(front==-1 && back==-1)
        {
            front++;
            back++;
            arr[back]=x;
        }
        
        else
        {
            back++;
            arr[back]=x;
        }
    }
    
    void dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"queue underflow";
            return;
        }
        front++;
    }
    
    void peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"queue underflow"<<endl;
            return ;
        }
        cout<<arr[front]<<endl;
    }
    
    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true; 
        }
        return false;
    }
};

int main()
{
    queue qe;
    qe.enqueue(1);
    qe.enqueue(2);
    qe.enqueue(3);
    qe.enqueue(4);
    qe.peek();
    qe.dequeue();
    qe.dequeue();
    qe.dequeue();
    qe.dequeue();
    qe.peek();
    cout<<qe.empty()<<endl;
}

OUTPUT:

1
queue underflow
1
