#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int>st;
    
    public:
    
    void push(int x)
    {
        st.push(x);
        cout<<st.top()<<endl;
    }
    
    int pop()
    {
        if(st.empty())
        {
            cout<<"queue underflow"<<endl;
            return 0 ;
        }
        
        int x =st.top();
        st.pop();
        if(st.empty())
        {
            return x;
        }
        
        int item=pop();
        st.push(x);
        
        return item;
    }
    
    bool empty()
    {
        if(st.empty())
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

OUTPUT:

1
2
3
4
queue underflow
1