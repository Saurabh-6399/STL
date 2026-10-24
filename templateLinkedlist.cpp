#include<iostream> //sll
#include<stdio.h>
#define LINK_LIST_UNDERFLOW;
using namespace std;
template <typename X>
struct node{
    X item;
    node* next;
};
template <typename X>
class SLL{
     private:
        node* start;
    public:
       SLL(){ //question 2
          start=nullptr;
       } 
       void InsertatStart(X);
       void InsertatEnd(X);
       node<X>* SearchNode(X);
       void InsertatIndex(node<X>*,X);
       void deleteFirst();
       void deletelast();
       void deletenode(X);
       ~SLL();
};
template <typename X>
void SLL<X>::InsertatStart(X) //question 3
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}
template <typename X>
void SLL<X>::InsertatEnd(X) //question 4
{
    node *n=new node;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr)
       start=n;
    else 
    {  
        node* temp;
        temp=start;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=n;
    }    

}
template <typename X> node<X>* SLL<X>::SearchNode(X data)  //question 5
{
    node* temp=start;
    while(temp!=nullptr)
    {
        if(temp->item==data)
           return temp;
        temp=temp->next;   
    }
    return nullptr;    
}
template <typename X>void SLL<X>::InsertatIndex(node<X> *ptr,X data)  //question 6
{
    if(ptr!=nullptr)
    {
        node *n=new node;
        n->item=data;
        n->next=t->next;
        t->next=n;
    }      
}
template <typename X>void SLL<X>::deleteFirst()
{
    if(start!=nullptr){
       node *temp=start;
       start=start->next;
       delete temp;
    }
}
template <typename X>void SLL<X>::deletelast()
{
    if(start==nullptr)
      throw LINK_LIST_UNDERFLOW;
    if(start->next==nullptr)
    {
        delete start;
        start=nullptr;
    }
    else{
        node *temp=start;
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
        
    }
}
template <typename X>void SLL<X>::deletenode(X data)
{
    if(start==nullptr)
       throw LINK_LIST_UNDERFLOW;
    node *t1,*t2;
    t1=start;
    t2=nullptr;
    while(t1!=nullptr)
    {
        if(t1->item==data)
        {
            break;
        }
        t2=t1;
        t1=t1->next;
    }
    if(t2==nullptr)
      deleteFirst();
    if(t1!=nullptr)
    {
        t2->next=t1->next;
        delete t1;
    }      
}
template <typename X>SLL<X>::~SLL()
{
    while(start!=nullptr)
       deleteFirst();
}