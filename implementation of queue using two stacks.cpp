#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int>st1;
    stack<int>st2;
    
    public:
    
    void push(int x)
    {
        st1.push(x);
    }
    
    void pop()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"queue underflow"<<endl;
            return ;
        }
        
        if(st2.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int topvalue=st2.top();
        st2.pop();
        cout<< topvalue<<endl;
    }
    
    bool empty()
    {
        if(st1.empty() && st2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    
    cout<<q.empty();
}


output:

1
2
3
4
queue underflow
1