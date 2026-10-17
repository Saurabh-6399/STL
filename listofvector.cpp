#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<vector<int>> l1;
    vector<int> v1={10,20,30};
    vector<int> v2={11,22,33};
    vector<int> v3={100,200,300};
     
    l1.push_back(v1);
    l1.push_back(v2);
    l1.push_back(v3);

    for(auto v:l1)
    {
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}