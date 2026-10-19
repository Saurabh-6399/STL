#include<iostream>
#include<list>
#include<stack>
using namespace std;
int main()
{
    stack<int,list<int>> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    if(!s.empty())
       cout<<s.top();
    else
       cout<<"stack is empty";   
    cout<<endl;
    return 0;

}