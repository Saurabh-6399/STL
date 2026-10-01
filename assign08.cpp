#include<iostream>
#include<queue>
using namespace std;

void d1()
{
    deque<int> d1={23,4,54,3,456,654,564};
    deque<int>::iterator it;
    for(it=d1.begin();it!=d1.end();it++)
      cout<<*it<<" ";
    cout<<endl;  
}
void d2()
{
    deque<int> d1={23,4,54,3,456,654,564};
    cout<<*max_element(d1.begin(),d1.end());
}
void f3()
{
    deque<int> d1={23,4,54,54,4,456,654,564};
    sort(d1.begin(),d1.end());
    // {3,4,23,54,456,564,654}
    int i=0,j=0,count=0;
    while(j<d1.size())
    {
        if(d1[i]==d1[j])
        {
            count++;
            j++;
        }
        else
        {
            cout<<d1[i]<<"-"<<count<<endl;
            i=j;
            count=0;
        }
    }
    
}
void d4()
{
    deque<int> d1={23,4,54,3,456,654,564};
    int i=0,k,lenght,maxlenght,index;
    while(i<d1.size())
    {
        k=i;
        while(i<d1.size()-1 && d1[i]<=d1[i+1])
           i++;
        lenght=i+1-k; 
        if(lenght>maxlenght)
        {
            maxlenght=lenght;
            index=k;
        } 
        i++;
    }
    deque<int>::iterator it; ///explicit operator
    for(it=d1.begin()+index;it!=d1.begin()+index+maxlenght;it++)
       cout<<*it<<" ";
    cout<<endl;   

}
void d5()
{
    deque<int> d1={23,4,54,3,3,343,3,456,654,564};
    int c,i=0,maxValue,maxfreq=0;
    while(i<d1.size())
    {
        c=count(d1.begin(),d1.end(),d1[i]);
        if(maxfreq<c)
        {
            maxfreq=c;
            maxValue=d1[i];
        }
        i++;
    }
    cout<<maxValue<<"-"<<maxfreq;
    
}
int main()
{
   d5();
   cout<<endl;
   return 0;
}