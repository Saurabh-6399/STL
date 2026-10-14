#include<iostream>
#include<map>
using namespace std;
void print_employee(map<int,string>::iterator it)
{
    cout<<it->first<<" "<<it->second;
}
map<int,bool> find_emp(map<int,string> &m1,string name)
{
    map<int,bool> temp={{0,false}};
    for(auto x:m1)
    {
        if(name==x.second)
        {
            temp.clear();
            temp[x.first]=true;
            break;
        }
    }
    return temp;
}
int main()
{
    map<int,string> m1={{101,"saurabh"},{102,"raman"},{103,"sumit"},{104,"pariyaar"},{105,"yadavankit"}};
    for(auto e:m1)
       cout<<e.first<<" "<<e.second<<endl;
    cout<<endl;  
    
    cout<<" -----------------"<<endl;

    m1.insert(make_pair(106,"gaurav"));
    for(auto e:m1)
       cout<<e.first<<" "<<e.second<<endl;
    cout<<endl;

    map<int,string>::iterator it;
    for(it=m1.begin();it!=m1.end();it++)
        print_employee(it);
    cout<<endl;


    map<int,bool> m2;
    m2=find_emp(m1,"saurabh");
    for(auto x:m2)
       cout<<x.first<<" "<<x.second;
    cout<<endl;   
    
    




}