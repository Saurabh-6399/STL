#include<iostream>
#include<vector>
#include<string>
#include<utility>

using namespace std;
int main()
{
    pair <int,string> p1{24,"saurabh"};
    vector<int> v1={23,42,4,22,422};
    vector<int> v2={23,2,42,23,23};
    pair <string,vector<int>> p2,p3;
    p2=make_pair("manjeet",v1);
    p3=make_pair("saurabh",v2);


    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<":";
    for(auto e:p2.second)
       cout<<e<<" ";
    cout<<endl; 

    cout<<p3.first<<":";
    for(auto e:p3.second)
       cout<<e<<" ";
    cout<<endl;

    p2.swap(p3);
    
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<":";
    for(auto e:p2.second)
       cout<<e<<" ";
    cout<<endl; 

    cout<<p3.first<<":";
    for(auto e:p3.second)
       cout<<e<<" ";
    cout<<endl;
    return 0;

    
    

}


