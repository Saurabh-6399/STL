#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    //multimap;
    // duplicate are not values allowed
    map<int,string> m1={  {1,"saurabh"},{2,"sumit"},{3,"pariyaar"}};
    //implicit operator
    for(auto p:m1)
       cout<<p.first<<" "<<p.second<<endl;
    cout<<endl; 
    
    

    //explicit operator
    map<int,string>::iterator it;
    for(it=m1.begin();it!=m1.end();it++)
       cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;

    //insert 
    m1.insert(make_pair(4,"yadavankit"));
    for(auto p:m1)
       cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;


    cout<<m1[1]<<" "<<m1.size()<<" "<<m1.count(2)<<endl;
    m1.erase(2);
    for(auto p:m1)
       cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;


    //m1.swap(m2);

    //multimap;
    // duplicate values allowed

    multimap<int,string> mm1={  {1,"saurabh"},{1,"sumit"},{3,"pariyaar"}};
    //implicit operator
    for(auto p:mm1)
       cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;

    //unordered_map 
    unordered_map<int,string> m3={  {1,"saurabh"},{2,"sumit"},{3,"pariyaar"}};
    //implicit operator
    for(auto p:m3)
       cout<<p.first<<" "<<p.second<<endl;
    cout<<endl; 

    //unordered_multimap
    unordered_multimap<int,string> m4={  {1,"saurabh"},{1,"sumit"},{3,"pariyaar"}};
    //implicit operator
    for(auto p:m4)
       cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;




    return 0;

    
    

}