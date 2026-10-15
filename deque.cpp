#include<iostream>
#include<queue>
using namespace std;

int main()
{
    deque<int> d1={23,25,65,4,3,5,56,76};
    //[ operator]
    for(int i=0;i<d1.size();i++)
      cout<<d1[i]<<" ";
    cout<<endl; 
    
    
    //at() operator
    for(int i=0;i<d1.size();i++)
      cout<<d1.at(i)<<" ";
    cout<<endl;

    // implicit operator
    for(auto x:d1)
      cout<<x<<" ";
    cout<<endl;
    
    //explicit operator
    deque<int>:: iterator it;
    for(it=d1.begin();it!=d1.end();it++)
      cout<<*it<<" ";
    cout<<endl; 
    cout<<"----------------------"<<endl;

    d1.push_front(90);
    cout<<d1.front()<<endl;
    for(auto x:d1)
      cout<<x<<" ";
    cout<<endl;
    d1.insert(d1.end()-2,3,40);
    for(auto x:d1)
      cout<<x<<" ";
    cout<<endl;

    d1.erase(d1.begin()+2),d1.begin()+3;
    for(auto x:d1)
      cout<<x<<" ";
    cout<<endl;
    
    
}