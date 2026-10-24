#include<iostream> //Queue using Array
#define INVALID_CAPACITY 1
#define QUEUE_OVERFLOW 2
#define INVLAID_QUEUE 3
#define QUEUE_UNDERFLOW 4
using namespace std;
template <typename X>
class Queue{
   private:
       int capacity;
       int rear;
       int front;
       int *ptr;
    public:
        Queue(int); 
        void InsertAtRear(X);
        X ViewAtRear();
        X ViewAtFront();
        void deleteAtFront();
        ~Queue();
        bool Is_empty();
        bool Is_full(); 
        int countElement(); 
};
template <typename X>Queue<X>::Queue(int cap)
{
    ptr=nullptr;
    if(cap<1)
      throw INVALID_CAPACITY;
    capacity=cap;
    front=-1;
    rear=-1;
    ptr=new int[capacity];  
      
}
template <typename X>Queue<X>::~Queue()
{
    if(ptr!=nullptr)
       delete []ptr;
}
template <typename X>bool Queue<X>::Is_full()
{
    if(ptr==nullptr)
      throw INVLAID_QUEUE;
    return rear+1==front || (capacity==rear+1 && front==0);  
}
template <typename X>bool Queue<X>::Is_empty()
{
    if(ptr==nullptr)
       throw INVLAID_QUEUE;
    return front==-1;
       
}
template <typename X>void Queue<X>::InsertAtRear(X data)
{
    if(ptr==nullptr)
      throw INVLAID_QUEUE;
    if(Is_full()) 
        throw QUEUE_OVERFLOW;
    if(rear==-1)
    {
        front=0;
        rear=0;
        ptr[rear]=data;
    }
    else if(rear+1==capacity)
    {
        rear=0;
        ptr[rear]=data;
    }
    else 
    {
        rear++;
        ptr[rear]=data;
    }   
}
template <typename X>X Queue<X>::ViewAtRear()
{
    if(ptr==nullptr)
       throw INVLAID_QUEUE;
    if(Is_empty())
       throw QUEUE_UNDERFLOW;
    return ptr[rear];     
       
}
template <typename X>X Queue<X>::ViewAtFront()
{
    if(ptr==nullptr)
       throw INVLAID_QUEUE;
    if(Is_empty())
        throw QUEUE_UNDERFLOW;
    return ptr[front];       
}
template <typename X>void Queue<X>::deleteAtFront()
{
    if(ptr==nullptr)
       throw INVLAID_QUEUE;
    if(Is_empty())
       throw QUEUE_UNDERFLOW;
    if(front==rear)
        front=rear=-1;
    else if(front+1==capacity)
        front=0;
    else 
        front++;              
}
template <typename X>int Queue<X>::countElement()
{
    if(ptr==nullptr)
       throw INVLAID_QUEUE;
    if(Is_empty())
       throw QUEUE_UNDERFLOW;
    if(rear>=front)
    {
       return rear-front+1;
    }   
    else
    {
        return capacity-(front-rear)+1;
    }
}