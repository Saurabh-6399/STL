#include<iostream>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2={3,43,53,6,464,45,3};
    //cout<<v1.empty();
    cout<<v2.capacity()<<" "<<v2.size()<<endl;
    cout<<"-----------------"<<endl;
    cout<<endl;
    cout<<v2.front()<<" "<<v2.back()<<endl;
    cout<<"----------------"<<endl;
    v2.push_back(50);
    v2.push_back(30);
    v2.insert(v2.begin()+2,4,50);
    v2.insert(v2.end()-2,{11,223,23});
    for(auto x:v2)
       cout<<x<<" ";
    cout<<endl; 
    cout<<v2.capacity()<<" "<<v2.size()<<endl;
    cout<<"==============="<<endl;



}