#include<iostream>
#include<string>
using namespace std;
int count_world(string str)
{
    if(str.empty())
       return 0;
    int word=1;
    for(auto s:str)
      if(s==' ')
        word++;
    return word;    
             
}
void trim(string &str)
{
    string::iterator it;
    while(str.back()==' ')
       str.pop_back();
    while(str.front()==' ')
    {
       it=str.begin();
       str.erase(it);
    }   
       
}
void remove_extra_space(string &str)
{
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        if(*it==' '&& (*it+1)==' ')
        {
           str.erase(it);
           it=str.begin();
        }   
    }
}
int main()
{
    int i=count_world("saurabh is a good boys");
    cout<<" count world: "<<i<<endl;
    return 0;
}