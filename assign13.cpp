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
vector<string> split_string(string str)
{    /// first we will split all the string;
    vector<string> temp;
    string s1;
    for(auto s:str)
    {
        if(s!=' ')
          s1.push_back(s);
        else
        {
            temp.push_back(s1);
            s1.clear();
        }  
    }
    temp.push_back(s1);
    return temp;
}
void Reverse_word(string &str)
{
    vector<string> temp;
    temp=split_string(str);
    str.clear();
    vector<string>::reverse_iterator it;
    it=temp.rbegin();
    str=*it;
    for(it++;it!=temp.rend();it++)
    {
        str+=" ";
        str+=*it;
    }
}

int main()
{
    int i=count_world("saurabh is a good boys");
    cout<<" count world: "<<i<<endl;
    return 0;
}