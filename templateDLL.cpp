#include<iostream>
using namespace std;
template <typename X>
struct node
{
    node* prev;
    X item;
    node* next;
};
template <typename X>
class DLL{
    private:
       node* start;
    public:
      DLL();
      void Insertatstart(X);
      void InsertatEnd(X);
      node<X>* search(X);
      void InsertNode(node<X>*,X);
      void deleteFirst();
      void deleteLast();
      void deleteNode(X);
      ~DLL();
}; 
template <typename X>DLL<X>::DLL() //question 2
{
    start=nullptr;
}
template <typename X>void DLL<X>::Insertatstart(X data)  //question 3
{
   node *n=new node;
   n->item=data;
   n->prev=nullptr;
   n->next=start;\
   if(start!=nullptr)
      start->prev=n;
   start=n;
} 
template <typename X>void DLL<X>::InsertatEnd(X data) //question 4
{
    node *n=new node;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr)
    {
        n->prev=nullptr;
        start=n;
    }
    else{
        node* temp;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        n->prev=temp;
        temp->next=n;
    }

} 
template <typename X>node<X>* DLL<X>::search(X data) //question 5
{
    node* temp;
    if(start==nullptr)
       return nullptr;
    temp=start;
    while(temp->next!=nullptr)
    {
        if(temp->item==data)
            return temp;
        temp=temp->next;    
    } 
    return nullptr;
} 
template <typename X>void DLL<X>::InsertNode(node<X> *t,X data)  //question 6 
{
   if(t!=nullptr)
   {
       node *n=new node;
       n->item=data;
       n->next=t->next;
       n->prev=t;
       if(t->next!=nullptr)
       {
         t->next->prev=n;
       }
       t->next=n;

   }
}
template <typename X>void DLL<X>::deleteFirst()
{
    if(start!=nullptr)
    {
       if(start->next=nullptr)
       {
          delete start;
          start=nullptr;
       }
       else
       {
         start=start->next;
         delete start->prev;
         start->prev=nullptr;
       }
    }
}
template <typename X>void DLL<X>::deleteLast()
{
    if(start!=nullptr)
    {
        if(start->next=nullptr)
        {
            delete start;
            start=nullptr;
        }
        else{
            node *temp;
            temp=start;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->prev->next=nullptr;
            delete temp;
        }
    }
}
template <typename X>void DLL<X>::deleteNode(X data)
{
   node* temp= search(data);
   if(temp!=nullptr)
   {
      if(start==temp)
           deleteFirst();
      else if(temp->next==nullptr)
          deleteLast();
      else{
          temp->next->prev=temp->prev;
          temp->prev->next=temp->next;
          delete temp;
      }    
   }
}
template <typename X>DLL<X>::~DLL()
{
    while(start!=nullptr)
       deleteFirst();
}
