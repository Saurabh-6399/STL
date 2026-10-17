#include<iostream>
#include<queue>

using namespace std;
class Employee{
    private:
      string name;
      int age;
      double salary;
    public:
        Employee(string n,int a,double s):name(n),age(a),salary(s)
        {}
        string getname(){ return name; }
        int getage(){ return age; }
        double getsalary(){ return salary; } 
        void showdata(int sno,bool ser=true)
        {
            if(ser)
               cout<<sno<<" ";
            cout<<name<<"  "<<age<<"  "<<salary<<endl;
        }
};
// fructor
class CompareSalary
{
    public:
      bool operator()( Employee e1,Employee e2)
      {
          return e1.getsalary()< e2.getsalary();
      }
};
void testEmployeecode()
{
    Employee emp[]={ 
       *new Employee("saurabh",21,200000),
       *new Employee("akhil",21,50000),
       *new Employee("kajal",21,322000),
       *new Employee("prajwal",21,203300),
       *new Employee("mohit",32,230000)
    };
    int i=1;
    for(auto e:emp)
    {
    
        e.showdata(i,false);
        i++;

    }
    cout<<"---------------------"<<endl;
    priority_queue <Employee,vector<Employee>,CompareSalary> h1;
    for(auto e:emp)
       h1.push(e);
    Employee e=h1.top();
    e.showdata(i,false);
}
void p()
{
    int A[]={23,45,4,2,4,66};
    string cities[]={"agra","bopal","kanpur","patna","pune"};

    priority_queue <string> h1;
    for(auto x: cities)
    {
        h1.push(x);
    }   
    cout<<h1.top()<<endl;
    h1.pop();
    cout<<h1.top()<<endl;
    cout<<endl; 
}
int main()
{
    testEmployeecode();
    return 0;   
}
