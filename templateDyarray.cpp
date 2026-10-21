#include<iostream>// deep copy
#include<stdio.h>
using namespace std;
#define INVALID_CAPACITY 1;
#define ARRAY_NOT_CREATE 2;
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
#define NULL_POINT_ERROR 5
template <typename X>
class Array{
    private:
      int capacity;
      int lastindex=0;
      X *ptr;
    public:
       Array(int);
       Array& operator=(Array &);
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
       int findElement(X);\
       Array(Array &);


};
template <typename X>Array<X>::Array(int cap)
{
    if(cap<1)
      throw INVALID_CAPACITY;
    capacity=cap;
    lastindex=-1;
    ptr=new int[capacity];
}
template <typename X>Array<X>::Array(Array &arr)
{
    capacity=arr.capacity;
    lastindex=arr.lastindex;
    if(arr.ptr==nullptr)
        ptr=nullptr;
    else 
       ptr=new int[capacity];
       for(int i=0;i<arr.lastindex;i++)
          ptr[i]=arr.ptr[i];         
}
template <typename X>Array<X>& Array<X>::operator=(Array &arr1)
{
    if(this!=&arr1)
    {
       if(arr1.ptr==nullptr)
       {
           throw NULL_POINT_ERROR;
       } 
       if(ptr!=nullptr)
           delete []ptr;
           ptr=nullptr;
        capacity=arr1.capacity;
        lastindex=arr1.lastindex;
        ptr=new int[capacity];
        for(int i=0;i<arr1.lastindex;i++)
           ptr[i]=arr1.ptr[i];

    }
    return *this;
          
}
template <typename X>void Array<X>::createArray(int cap)
{
    if(cap<1)
      throw INVALID_CAPACITY;
    if(ptr!=nullptr)
       delete []ptr;
    capacity=cap;
    lastindex=-1;
    ptr=new int[capacity];     
}
template <typename X>bool Array<X>::isempty()
{
    if(ptr==nullptr)
      throw ARRAY_NOT_CREATE;
    return lastindex==-1; 
}
template <typename X>void Array<X>::append(X)
{
    if(ptr==nullptr)
       throw ARRAY_NOT_CREATE;
    if(isfull)
        throw ARRAY_OVERFLOW;
    lastindex++;    
    ptr[lastindex]=value;   
}
template <typename X>void Array<X>::insert(int index,X)
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
template <typename X>void Array<X>::edit(int index,X)
{
    if(ptr==nullptr)
       throw ARRAY_NOT_CREATE;
    if(index<0 || index>lastindex)
       throw INVALID_INDEX;
    ptr[index]=newdata;      
}
template <typename X>void Array<X>::del(int index)
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
template <typename X>bool Array<X>::isfull()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATE;
     return lastindex+1==capacity;    
} 
template <typename X>X Array<X>::getElement(int index) //QUESTIION 9
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATE;
    if(index<0 || index>lastindex)
        throw INVALID_INDEX;
    return ptr[index];      
}
template <typename X>int Array<X>::countelement()
{
    if(ptr==nullptr)
      throw ARRAY_NOT_CREATE;
    return lastindex+1; 
}
template <typename X>Array<X>::~Array()
{
    if(ptr!=nullptr)
       delete []ptr;
}
template <typename X>int Array<X>::findElement(X)
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
