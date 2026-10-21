#include<iostream>
using namespace std;
#define INVALID_CAPACITY 1;
#define ARRAY_NOT_CREATE 2;
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
template <class X>
class Array{
    private:
      int capacity;
      int lastindex=0;
      X *ptr;
    public:
       Array(int);
       void createArray(int);
       bool isempty();
       void append(X);
       void insert(int,X);
       void edit(int,X);
       void del(int);
       bool isfull();
       X getElement(int);
       int countelement();
       virtual ~Array();
       int findElement(X);

}; 
template <class X>
Array<X>::Array(int cap) //question 1
{
    if(cap<1)
      throw INVALID_CAPACITY;
    capacity=cap;
    lastindex=-1;
    ptr=new int[capacity];
}
template <class X>
void Array<X>::createArray(int cap)
{
    if(cap<1)
      throw INVALID_CAPACITY;
    if(ptr!=nullptr)
       delete []ptr;
    capacity=cap;
    lastindex=-1;
    ptr=new int[capacity];     
}
template <class X>
bool Array<X>::isempty()
{
    if(ptr==nullptr)
      throw ARRAY_NOT_CREATE;
    return lastindex==-1; 
}
template <class X>
void Array<X>::append(X)
{
    if(ptr==nullptr)
       throw ARRAY_NOT_CREATE;
    if(isfull)
        throw ARRAY_OVERFLOW;
    lastindex++;    
    ptr[lastindex]=value;   
}
template <class X>
void Array<X>::insert(int index,X)
{
    if(ptr==nullptr)
       throw ARRAY_NOT_CREATE;
    if(isfull)
      throw ARRAY_OVERFLOW;
    if(index<0 ||index>lastindex) 
      throw INVALID_INDEX;
    for(int i=lastindex;i>=index;i--)
    {
        ptr[i+1]=ptr[i];
    } 
    ptr[index]=data;
    lastindex++; 
}
template <class X>
void Array<X>::edit(int index,X)
{
    if(ptr==nullptr)
       throw ARRAY_NOT_CREATE;
    if(index<0 || index>lastindex)
       throw INVALID_INDEX;
    ptr[index]=newdata;      
}
template <class X>
void Array<X>::del(int index)
{
    if(ptr==nullptr)
       throw ARRAY_NOT_CREATE;
    if(index<0 || index>lastindex) 
       throw INVALID_INDEX;
    for(int i=index;i<lastindex;i++)
    {
        ptr[i]=ptr[i+1];
    }
    lastindex--;
}
template <class X>
bool Array<X>::isfull()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATE;
     return lastindex+1==capacity;    
} 
template <class X>
X Array<X>::getElement(int index) //QUESTIION 9
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATE;
    if(index<0 || index>lastindex)
        throw INVALID_INDEX;
    return ptr[index];      
}
template <class X>
int Array<X>::countelement()
{
    if(ptr==nullptr)
      throw ARRAY_NOT_CREATE;
    return lastindex+1; 
}
template <class X>
Array<X>::~Array()
{
    if(ptr!=nullptr)
       delete []ptr;
}
template <class X>
int Array<X>::findElement(X)
{
    if(ptr==nullptr)
      throw ARRAY_NOT_CREATE;
    for(int i=0;i<=lastindex;i++)
    {
         if(ptr[i]==data)
              return i;
    } 
    return -1; 
}
