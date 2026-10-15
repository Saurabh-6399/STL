#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
   forward_list<int> l1={23,43,53,5,3};
   for(auto x:l1)
      cout<<x<<" ";
    cout<<endl;

    //explicit operator
    forward_list<int>::iterator fit;
    for(fit=l1.begin();fit!=l1.end();fit++)
      cout<<*fit<<" ";
    cout<<endl;
    // add new element;
    cout<<endl;
    l1.push_front(40);
    l1.insert_after(l1.before_begin(),50);
    for(auto x:l1)
      cout<<x<<" ";
    cout<<endl;


    //remove element;
    l1.erase_after(l1.before_begin());
    l1.pop_front();
    for(auto x:l1)
      cout<<x<<" ";
    cout<<endl;

    //sorting
    l1.sort();
    for(auto x:l1)
      cout<<x<<" ";
    cout<<endl;


    

    

}