#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s[]=" ";
    string s1="mysirg";
    string s2="saurabh is a good boys";
    string s4="mysirg";
    for(int i=0;i<s2.size();i++)
       cout<<s2[i];
    cout<<endl;  
    
    //at[]
    for(int i=0;i<s2.size();i++)
       cout<<s2.at(i);
    cout<<endl;  

    // implicit operator
    for(auto s:s2)
       cout<<s;
    cout<<endl;  
    
    //explicit operator
    string::iterator it;
    for(it=s2.begin();it!=s2.end();it++)
      cout<<*it;
    cout<<endl; 

    cout<<"---------------------"<<endl;
    cout<<s2<<endl;

    cout<<s2.front()<<"   "<<s2.back()<<endl;
    cout<<s2.capacity()<<" "<<s2.size()<<" "<<s2.length()<<endl;
     
    //append data 
    string s3=" private limited";
    //for(auto e:s3)
   //     s2.push_back(e);
   // cout<<endl;

    s2.append(s3);
    cout<<s2<<endl;

    
    s2=s2+s3; //s2+=s3;
   // cout<<s2<<endl;
    cout<<"==================="<<endl;

    //compare of string 
    //int c=s1>s2;
    int c;
    c=s1.compare(s4);
    cout<<c;
    cout<<endl;
    return 0;


}

 