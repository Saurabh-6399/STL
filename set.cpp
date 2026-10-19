#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main()
{
    set<int> s1={23,43,45,26,67};
    for(auto e:s1)
       cout<<e<<" ";
    cout<<endl;   

    set<int>::iterator it;
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<" --------------------------"<<endl;
    
    it=s1.begin();
    it++;
    it++;
    s1.insert(it,60);
    for(auto e:s1)
       cout<<e<<" ";
    cout<<endl;
    
    multiset<int> mt1={42,535,63,52,46,4,5,46};
    for(auto e:mt1)
       cout<<e<<" ";
    cout<<endl; 

    cout<<"-0000---------000----------"<<endl;
    unordered_set<int> un1={23,51,42,53,11,43,75};
    for(auto e:un1)
       cout<<e<<" ";
    cout<<endl; 

    unordered_set<int>::iterator it;
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<endl;

}