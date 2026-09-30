#include<iostream>
#include<array>
using namespace std;

void a1()
{
    array<int,5> a1={21,32,42,53,232};

    //for explicit itrator;
    array<int,5>::reverse_iterator rit;
    for(rit=a1.rbegin();rit!=a1.rend();rit++)
       cout<<(*rit)<<" ";
    cout<<endl;  
}
void a2()
{
    array<float,5> a2={1.2f,3.4f,3.2f,4.3f,4.3f};
    array<float,5>::iterator it;
    float avg,sum=0;
    for(it=a2.begin();it!=a2.end();it++)
        sum+=(*it);
    avg=sum/a2.size();
    cout<<"average: "<<avg<<endl;       
}
void a3()
{
    int temp;
    array<int,10> a1;
    cout<<endl<<"enter 10 arrar values";
    for(int i=0;i<=9;i++)
    {
        cin>>temp;
        a1[i]=temp;
    }
    cout<<*max_element(a1.begin(),a1.end());
    cout<<endl;
    
}
class Complex{
    private:
      int a,b;
    public:
       Complex(int x,int y):a(x),b(y)
       { }
       void showdata(){
           cout<<"\na= "<<a<<"b= "<<b;
        }
       Complex operator+ (Complex c)
       {
          Complex t(0,0);
          t.a=a+c.a;
          t.b=b+c.b;
          return t;
       }

};
void p4()
{
    Complex sum(array<Complex,5>);
    array<Complex,5> a1={
        Complex(2,4),
        Complex(3,5),
        Complex(-3,7),
        Complex(2,-4),
        Complex(6,5)

    };
    Complex C=sum(a1);
    C.showdata();
    cout<<endl;
}
Complex sum(array<Complex,5> a1)
{
    Complex C(0,0);

    for(auto x:a1)
       C=C+x;
    return C;  

}
void main()
{
    array<int,10> a5={12,4,34,565,64,2,3,54,54,200};
    sort(a5.begin(),a5.end());
}
