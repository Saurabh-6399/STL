#include<iostream>
#include<vector>
using namespace std;
void p1()
{
    // []method
    vector<int> v1;
    vector<int> v2={23,34,44,343,35};
    for(int i=0;i<v2.size();i++)
      cout<<v2[i]<<" ";
    cout<<endl;  
}
void p2()
{
    // at method
    vector<float> v1={2.3f,3.0f,6.5f,4.5f,4.3f};
    for(int i=0;i<v1.size();i++)
        cout<<v1.at(i)<<" ";
    cout<<endl;    
}
void p3()
{
    // implicit method
    vector<float> v1={2.3f,3.0f,6.5f,4.5f,4.3f};
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;    
}
void p4()
{
    // explicit method
    vector<float> v1={2.3f,3.0f,6.5f,4.5f,4.3f};
    vector<float>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
       cout<<*it<<" ";
    cout<<endl;   
       
}
vector<int> p5()
{
   vector<int> v1={34,54,64,23,57,55,67};
   vector<int> v3;
   vector<int>::iterator it;
   for(it=v1.begin()+1;it!=v1.end()-1;it++)
   {
      if(*it < *(it-1) && *it < *(it+1))
        v3.push_back(*it);
   }
   return v3;   
}
int main()
{
    vector<int>v2;
    v2=p5();
    for(auto x:v2)
       cout<<x<<" ";
    cout<<endl;
    return 0;   

}    

