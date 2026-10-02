#include<iostream>
#include<queue>
#include<stack>
#include<deque>
#include<vector>
using namespace std;
class Stack
{
    private:
      queue<int> q1;
    public:
       bool Is_empty();
       void push(int);
       int peek_top();
       void pop();  
};
bool Stack::Is_empty()
{
    return q1.empty();
}
void Stack::push(int value)
{
    q1.push(value);
}
int Stack::peek_top()
{
    if(q1.empty())
       throw -1;
    return q1.back();
}
void Stack::pop()
{
    queue<int> temp;
    int l=q1.size();
    while(!q1.empty())
    {
        if(l==1)
        {
            q1.pop();
            break;
        }
        temp.push(q1.front()); 
        q1.pop();
        l--;
    }
    if(!temp.empty())
       q1=temp;
       
}
class priorityQueue{
    private:
      int capacities;
      vector<queue<int>> priority;
    public:
       priorityQueue(int pno):capacities(pno),priority(pno){}
       void insert(int,int);
       void pop(); 
       int get_prioritypno();
       int get_item();
       bool is_empty();

};
void priorityQueue::insert(int value,int pno)
{
    if(pno>0 && pno<capacities)
       priority[pno-1].push(value);
    else
      cout<<"invalid priority number"<<endl;   
}
void priorityQueue::pop()
{    
    for(int x=capacities-1;x>=0;x--)
    {
        if(!priority[x].empty())
        {
            priority[x].pop();
            break;
        }
    }    
}
int priorityQueue::get_prioritypno()
{   
    for(int x=capacities-1;x>=0;x--) 
        if(!priority[x].empty())
           return x;
    throw -1;       
            
}
int priorityQueue::get_item()
{
    for(int x=capacities-1;x>=0;x--)
      if(!priority[x].empty())
        return priority[x].front();
}
bool priorityQueue::is_empty()
{
    for(int x=capacities-1;x>=0;x--)
      if(!priority[x].empty())
        return false;
    return true;    
        
}
void reverse_queue_k_position(int k,queue<int> &q)
{
    queue<int> temp;
    stack<int> s1;
    int i=1;
    while(i<=k && (!q.empty()))
    {
        s1.push(q.front());
        q.pop();
        i++;
    }
    while((!s1.empty())  || (!q.empty()))
    {
        if(!s1.empty())
        {
            temp.push(s1.top());
            s1.pop();
        }
        else
        {
            temp.push(q.front());
            q.pop();
        }
    }
    q=temp;
}
int main()
{
   
}
