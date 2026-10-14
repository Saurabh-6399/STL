#include<iostream>
#include<set>
using namespace std;
class Score{
   private:
       int runs,wicket;
    public:
      Score(int r,int w):runs(r),wicket(w) {}
      int getruns(){  return runs;  }
      int getwickets(){   return wicket; }
      void display_runs()
      {
         cout<<"Runs: "<<runs<<"wicket "<<wicket<<endl;
      }
      void display_wicket()
      {
         cout<<"wicket: "<<wicket<<"Runs: "<<runs<<endl;
      }
};
class Runs_rank{
   public:
      bool operator()(Score &s1,Score &s2)
      {
         return (s1.getruns()<s2.getruns());
      }
};
class wicket_rank{
   public:
     bool operator()(Score &s1,Score &s2)
     {
        return (s1.getwickets()<s2.getwickets());
     }

};
