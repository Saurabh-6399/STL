#include<iostream>
#include<string>
#include<queue>
using namespace std;
class student
{
    private:
      int rollno;
      string name;
      string course_name;
    public:
      student(int r,string n,string cn)
      {
        rollno=r;
        name=n;
        course_name=cn;
      }
      student(){}
      void setrollno(int r){  rollno=r; }
      void setname(string n){  name=n; }
      void setcourse_name(string cn){  course_name=cn; }
      int getrollno(){   return rollno; }
      string getName(){   return name; }
      string getcourse_name(){   return course_name; }
      void show_data()
      {
        cout<<"Roll no.  "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Course_name:  "<<course_name<<endl;
      }

};
class roll_number
{
    bool operator()(student s1,student s2)
    {
        return s1.getrollno()<s2.getrollno();
    }

};

class Batsman
{
    private:
       string name;
       int runs,hundered,fifties;
    public:
       Batsman(string n,int r,int h,int f)
       {
          name=n;
          runs=r;
          hundered=h;
          fifties=f;
       }
       Batsman(){}
       void setName(int n){   name=n; }
       void setRun(int r){   runs=r; }
       void setHundered(int h){   hundered=h; }
       void setFifties(int f){   fifties=f; }
       string getName(){  return name; }
       int getRuns(){   return runs; }
       int getHundered(){   return hundered; }
       int getfifties(){   return fifties; }
       void show_data()
       {
           cout<<"Name:  "<<name<<endl;
           cout<<"Runs:  "<<runs<<endl;
           cout<<"Hundered:  "<<hundered<<endl;
           cout<<"Fifties:  "<<fifties<<endl;   
       }


};
class Run
{
    bool operator()(Batsman b1,Batsman b2)
    {
        return b1.getRuns()<b2.getRuns();
    }
};
int main()
{
    student s1(10,"saurabh","btech");
    student s2(20,"kashish","mtech");
    student s3(30,"nitin","rtech");
    priority_queue<student,vector<student>,roll_number> pq1;
    pq1.push(s1);
    pq1.push(s2);
    pq1.push(s3);
    student s4=pq1.top();
    s4.show_data();
    return 0;

}