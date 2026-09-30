#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

void l1()
{
    list<string> l;
    list<string> l1={"saurabh","bhopal","akhil","rahul"};
    list<string>::reverse_iterator rit;
    for(rit=l1.rbegin();rit!=l1.rend();rit++)
       cout<<*rit<<" ";
    cout<<endl;   
    
}
void p2()
{
    vector<int> v1={23,4,324,2,4,2,2,42,42,42,424};
    list <int> l1;
    l1.insert(l1.begin(),v1.begin(),v1.end());
    for(auto x:l1)
       cout<<x<<" ";
    cout<<endl;   
}
void p3()
{
    list <int> l1={23,43,45,65,45,65,76,87};
    cout<<"greatest element of list: "<<*max_element(l1.begin(),l1.end());
}
void p4()
{
    list <int> l1={23,43,45,65,45,65,76,87};
    l1.sort();
    for(auto x:l1)
       cout<<x<<" ";
    cout<<endl;   

}
void p5()
{
    vector<int> v1={3,53,5,3,55,76,63,21,7};
    list<int> l1;
    for(auto x:v1)
    {
        if(x%2==0)
            l1.push_front(x);
        else
        {
            l1.push_back(x);
        }    
    }
    for(auto c:l1)
      cout<<c<<" ";
    cout<<endl;

}
int main()
{
    p5();
    cout<<endl;
    return 0;
}

