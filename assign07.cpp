#include<iostream>
#include<forward_list>
using namespace std;
void p1()
{
   forward_list<int> f1;
   f1={10,10,10,10,5,5,5};
   for(auto x:f1)
      cout<<x<<" ";
   cout<<endl;    

}
void f2()
{
    forward_list<string> f2={"saurabh","santosh","mukesh","babua","babar"};
    f2.reverse();
    for(auto x:f2)
      cout<<x<<" ";
    cout<<endl;

}
void f3()
{
    forward_list<int> f1={23,24,56,34,45,53};
    int num,count=0;
    cout<<"enter a number: ";
    cin>>num;
    for(auto x:f1)
    {
        if(x>num)
          count++;
    }
    cout<<"count: "<<count<<endl;
}
void f4()
{
    forward_list<int> f1={23,24,56,-34,90,45,-53,34,43};
    int num;
    cin>>num;
    f1.remove(*upper_bound(f1.begin(),f1.end(),num));
    for(auto c:f1)
       cout<<c<<" ";
    cout<<endl;  

}
struct term 
{
    int coffi,express;
    term(int c,int e):coffi(c),express(e){};
};
void f5()
{
    forward_list<term> f2;
    f2.push_front(*new term(10,0));
    f2.push_front(*new term(1,1));
    f2.push_front(*new term(-4,2));
    f2.push_front(*new term(5,3));
    for(auto x:f2)
    {
        cout<<x.coffi<<"x^"<<x.express<<" ";
    }

}
int main()
{
    f5();
    cout<<endl;
    return 0;
}