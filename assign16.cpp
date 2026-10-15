#include<iostream>
#include<vector>
using namespace std;
void e1()
{
    vector<int> v1={ 23,31,3,15,3,64};
    cout<<count_if(v1.begin(),v1.end(),[](int a)-> bool{   return a>20;   });

}
int is_prime(int n)
{
   if(n<2)
      return 0;
   for(int i=2;i<n;i++)
    {
        if(n%i==0)
          return 0;
    } 
    return 1;   
}
int next_prime(int num)
{
    while(!is_prime(++num));
    return num;
}
void e2()
{
    vector<int> v1(10);
    generate_n(v1.begin(),10,[]()-> int {
        static int i;
        i=next_prime(i);
        return i;
    });
    for(auto s:v1)
       cout<<s<<" ";
    cout<<endl;   
}
void e3()  // for_each()
{
    vector<int> v1={ 23,31,3,15,64,7,11};
    for_each(v1.begin(),v1.end(),[](int a)-> void{
        if(is_prime(a))
          cout<<a<<" ";
    });
}
void e4()   //frequency count();
{
    vector<int> v1={ 23,31,3,15,64,7,11 };
    unordered_map<int,int> freq;
    for(auto s:v1)
       freq[s]++;
    for(auto p:freq)
       cout<<p.first<<" "<<p.second;
    cout<<endl;     


}
int main()
{
    e3();
    cout<<endl;
    return 0;
}