#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<tuple>
using namespace std;
int main()
{
    tuple<int,string,float> t1{24,"saurabh",23.3};
    vector<int> v1={23,43,24,25,26,24,40};
    tuple<int,vector<int>,string> t2;
    t2=make_tuple(23,v1,"gaurav");

    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);
    cout<<endl;

    //for t2
    cout<<get<0>(t2)<<": ";
    for(auto w:get<1>(t2))
       cout<<w<<" ";
    cout<<get<2>(t2);
    cout<<endl;



}
