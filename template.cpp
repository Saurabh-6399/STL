#include<iostream>
using namespace std;

template <class X>
X big(X a,X b)
{
    if(a>b)
        return a;
    else 
        return b;    
}
class Items
{
    private:
       int x,y;
    public:
       Items(int m,int n):x(m),y(n){}
       void showdata(){ cout<<"x="<<x<<" y="<<y;}
       bool operator>(const Items &i)
       {
          if(x+y>i.x+i.y)
             return true;
           else
              return false;  
       }
};
int main()
{
    cout<<big(20,23)<<endl;
    cout<<big(20.4,32.5)<<endl;
    Items i1(2,3),i2(24,54);
    Items i3=big(i1,i2);
    i3.showdata();
    return 0;
}