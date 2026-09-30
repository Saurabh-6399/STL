#include<iostream>
using namespace std;

int main()
{
    array <int,5> a1;
    array <float,3> a2={20.5f,23.6f,28.8f};
    array <float,3> a3=a2;
     // []
    //for(int i=0;i<=2;i++)
     //  cout<<a3[i]<<" ";
    

       // at()
    for(int i=0;i<=2;i++)
       cout<<a3.at(i)<<" ";
    cout<<endl;
    try{
        cout<<a3.at(4);
    }  
    catch(out_of_range e)
    {
        cout<<e.what()<<endl;
    }  
    cout<<"---------------------"<<endl;
    //implicit iterator | range for loop
    /*for(float x:a2)
       cout<<x<<"  ";
    cout<<endl;   
    for(float x:a2)
    {
        x++;
        cout<<x<<" ";
    }
    cout<<"-------------------"<<endl;
    */
    ///explicit operator
    array <float,3>::iterator it;
    for(it=a2.begin();it!=a2.end();it++)
        (*it)--;
    cout<<endl; 
    cout<<"-----------------------";   
     
    cout<<endl;
    for(it=a2.end()-1;it!=a2.begin()-1;it--)  
       cout<<*it<<" ";
    cout<<endl;

    //better wat to access element in reverse;
    /*
    array<float,3>::reverse_iterator rit;
    for(rit=a2.rbegin();rit!=a2.rend();rit++)  
        cout<<*rit<<" ";
    cout<<endl;
    //access the last element;
    cout<<"last element: "<<a2.back()<<endl;
    cout<<"first element: "<<a2.front()<<endl;
    for(auto x:a1)
       cout<<x<<"  ";
    cout<<endl;
    */ 
    cout<<"-------------------"<<endl;
    cout<<a2.empty()<<endl;
    cout<<a1.empty()<<endl;
    cout<<*a2.data()<<endl;
    cout<<a1.size()<<endl;
    cout<<a2.size()<<endl;



    return 0;  

}    