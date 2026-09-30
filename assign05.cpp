#include<iostream>
#include<vector>

using namespace std;
vector<int> p1(vector<int> v1)
{
    v1.erase(find_if(v1.begin(),v1.end(),[](int x)->bool {return x<0;}),v1.end());
    return v1;
}
void p2()
{
    vector<int> v2={23,53,34};
    v2.insert(v2.end()-1,3,25);
    for(auto x:v2)
       cout<<x<<" ";
    cout<<endl;   
      
}
void p3()
{
    vector<int> v={2,4,3,4,5,6,3,4,6,4,5};
    vector<vector<int>> v1;
    vector<int> *ptr;
    int i=0,s,e,j=0;
    while(i<v.size()-1)
    {
        while(i<v.size()-1 && v.at(i)<v.at(i+1))
          i++;
        e=++i; 
        ptr=new vector<int>();
        ptr->insert(ptr->begin(),v.begin()+s,v.end()+e);
        v1.insert(v1.begin()+j,*ptr);
        j++;
    }
    for(auto x:v1)
    {   for(auto y:x)
          cout<<y<<" ";
       cout<<endl; 
    }    

}
bool Is_prime(int n)
{
    int i;
   for(i=2;i<=n-1;i++)
   {
      if(n%i==0)
        return false;    
   }
   return true;
}
void p4()
{
    vector<int> v1={30,3,4,11,34,36,57};
    for(int i=0;i<v1.size();i++)
    {
        if(Is_prime(v1.at(i)))
        {
            v1.erase(v1.begin()+i);
            i--;
        }
    }
    for(auto x:v1)
      cout<<x<<" ";
    cout<<endl;  

}
void p5()
{
    vector <vector<int>> vec={
        {2,4,3,53,5},
        {23,33,5,5,4,3},
        {100,200,300,400}
    };
    vector <int> v1;
    v1.insert(v1.end(),vec.at(0).begin(),vec.at(0).begin()+3);
    v1.insert(v1.end(),vec.at(1).end()-2,vec.at(1).end());
    v1.insert(v1.end(),vec.at(2).begin(),vec.at(2).end());

    for(auto x:v1)
      cout<<x<<" ";
    cout<<endl;  
}
int main()
{  
   p5();
   cout<<endl;
   return 0;
}