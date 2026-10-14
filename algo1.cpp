#include<iostream>
#include<vector>
using namespace std;
void example1() //adjacent_find
{
    vector<int> v1={23,43,5,547,5,366,5,5,67};
    int x=*adjacent_find(v1.begin(),v1.end());
    cout<<"adjacent number in given vector: "<<x;
    cout<<endl;


    vector <int> v2={23,53,64,65,76,87,50};
    vector<int>::iterator it;
    it=adjacent_find(v2.begin(),v2.end());
    if(it==v2.end())
    {
        cout<<"adjacent number are not found"<<endl;
    }

}
void example2()//all_of();
{
    vector <int> v3={24,534,64,6,76,84,50};
    if(all_of(v3.begin(),v3.end(),[](int a)-> bool { return a%2==0; }))
       cout<<"\n all numbers are even";
    else
       cout<<"\n all number are not even";
}
void example3() //all_of();
{
    vector <int> v3={24,534,64,6,76,84,50};
    if(all_of(v3.begin(),v3.end(),[](int a)-> bool { return a%2==1; }))
       cout<<"\n atleast one of the number is odd";
    else
       cout<<"\n none of these odd";   
}
void example4() //binary_search()
{
    vector <int> v4={24,53,64,67,76,84,90};
    if(binary_search(v4.begin(),v4.end(),64))
      cout<<"\n element founded ";
    else 
       cout<<"\n element are not found ";
   
}
void example5() //lower_bound() and  upper_bound()
{
    vector <int> v1={1,3,4,4,7,7,24,67,76,84,90,110,120,135,254};
    vector<int>::iterator it;
    it=lower_bound(v1.begin(),v1.end(),100);
    cout<<"\n element just greater then or equal to 7 at index: "<<it-v1.begin();
    it=upper_bound(v1.begin(),v1.end(),100);
    cout<<"\n element just greater then 7 at index: "<<it-v1.begin();
    
}
void example6() //max-element() and min_element()
{
    vector <int> v1={1,3,4,4,7,7,24,67,76,84,90,110,120,135,254};
    cout<<"\nmax: "<<*max_element(v1.begin(),v1.end());
    cout<<"\nmin: "<<*min_element(v1.begin(),v1.end());
}
void example7() //for_each()
{
    vector <int> v1={1,3,4,4,7,7,24};
    for_each(v1.begin(),v1.end(),[](int a)->void{ cout<<endl<<a<<"=>"<<a*a; });
    for(auto s:v1)
        cout<<s<<" ";
    cout<<endl;        
}
int Is_prime(int n)
{
    if(n<2)
      return 0;
    for(int i;i<n;i++)
    {
        if(n%2==0)
          return 0;     
    } 
    return 1;
     
}
int next_prime(int num)
{
    while(!Is_prime(++num));
    return num;
}
void example8() //generate
{
    vector<int>v1(10);
    generate(v1.begin(),v1.end(),[]()->int {static int i;i=next_prime(i);
    return i; });
    for(auto s:v1)
       cout<<s<<" ";
    cout<<endl;  
}
void example9() //generate_n
{
    vector<int>v1(10);
    generate_n(v1.begin(),4,[]()->int {
        static int i;
        i=next_prime(i);
        return i;
        });
    for(auto s:v1)
       cout<<s<<" ";
    cout<<endl;
}
void example10()  //count() and coutn_if()
{
    vector <int> v1={24,84,76,84,90,110,120,84,254};
    cout<<count(v1.begin(),v1.end(),84)<<endl;
    cout<<count_if(v1.begin(),v1.end(),[](int x)->bool {return x>20; });
}
void example11()   //find()
{
    vector <int> v1={24,84,76,84,90,110,120,84,254};
    vector<int>::iterator it;
    it=find(v1.begin(),v1.end(),100);
    if(it==v1.end())
       cout<<"element not found";
    else
       cout<<"element found at index"<<it-v1.begin();   

}
void example12()
{

    vector <int> v1={24,84,76,84,90,110,120,84,254};
    vector<int>::iterator it;
    it=find(v1.begin(),v1.end(),[](int x)->bool {
        int k;
        k=(int)sqrt(x);
        return k*k==x;
    });
    if(it==v1.end())
       cout<<"element not found";
    else
       cout<<"element found at index"<<it-v1.begin(); 
}
void example13()  //equal_to
{
    vector<int> v1={1,2,3,4,5,6,7};
    vector <int> v2={2,3,4};
    if(equal(v2.begin(),v2.end(),v1.begin()+1))
       cout<<"equal"<<endl;
    else  
        cout<<"not equal";
          
}
void example14()   //fill()
{
    vector<int> v5={10,10,20,30,40,40,50,50,05,60,70,80,80};
    fill(v5.begin()+4,v5.end()+8,100);
    for(auto e:v5)
      cout<<e<<" ";
    cout<<endl; 
}
void example15()  //remove
{
    vector <int> v1={24,84,76,84,90,110};
    vector<int>::iterator it,newend;
    newend=remove(v1.begin(),v1.end(),76);
    for(it=v1.begin();it!=newend;it++)
      cout<<*it<<" ";
    cout<<endl;

}
void exam16()  //reverse
{
    vector <int> v1={24,84,76,84,90,110};
    reverse(v1.begin(),v1.end());
    for(auto e:v1)
      cout<<e<<" ";
    cout<<endl; 


}
void exam17()  //replace
{
    vector <int> v1={24,84,76,84,90,110};
    replace(v1.begin(),v1.end(),84,34);
    for(auto e:v1)
      cout<<e<<" ";
    cout<<endl; 


}
void exam18()  //search
{
    vector <int> v1={24,84,76,84,90,110,123,343};
    vector <int> v2={84,90,110};
    vector<int>::iterator it;
    it=search(v1.begin(),v1.end(),v2.begin(),v2.end());
    if(it==v1.end())
       cout<<"subsequence not found";
    else 
       cout<<" subsequence found at index: "<<it-v1.begin();

}
void example19() //is_sorted()
{
    vector <int> v1={24,84,76,84,90,110,123,343};
    if(is_sorted(v1.begin(),v1.end()))
       cout<<" yes it is sorted";
    else 
       cout<<" no it is not sorted";   

}
void example20() //is_sorted_until()
{
    vector <int> v1={24,84,76,84,90,110,123,343};
    vector<int>::iterator it;
    it=is_sorted_until(v1.begin(),v1.end());
    cout<<*it<<endl;
    cout<<"number of sorted elemnet until unsorted one is: "<<it-v1.begin();
}
void example21() //sort()
{
    vector <int> v1={24,84,76,84,90,110,123,343};
    sort(v1.begin(),v1.end());
    for(auto e:v1)
      cout<<e<<" ";
    cout<<endl; 

}
int main()
{
    example15();
    cout<<endl;
    return 0;

}
