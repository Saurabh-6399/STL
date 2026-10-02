#include<iostream>
#include<string>
using namespace std;
int count_vowel(string s)
{
    int count=0;
    for(int i=0;i<s[i];i++)
    {
        if('a'==s[i]||'e'==s[i]||'i'==s[i]||'o'==s[i]||'u'==s[i])
          count++;
        else if('A'==s[i]||'E'==s[i]||'I'==s[i]||'O'==s[i]||'U'==s[i]) 
          count++; 
    }
    return count;

}
bool Is_palidrome(string str)
{
    int l;
    l=str.length();
    for(int i=0,z=l-1;i<l/2;i++,z--)
    {
        if(str[i]!=str[z])
          return false;
    }
    return true;
}
bool Search_pattern(string str,string p)
{
    int lens=str.length();
    int k=p.length();
    int a,s;
    for(int x=0;x<=lens-k;x++)
    {
        s=x;
        for(a=0;a<k;a++,s++)
        {
            if(str[s]!=p[a])
              break;
        }
        if(a==k)
           return true;
    }
    return false;
}
void capatilise(string &str)
{
    for(int i=0;i<str[i];i++)
    {
        if(i==0||str[i]==' ' && str[i]>='a'&& str[i]<='z')
          str[i]=str[i]-32;
        else if(str[i]==' ' && str[i+1]>='a'&& str[i+1]<='z') 
           str[i+1]=str[i+1]-32;
    }
}
void Reverse(string &str)
{
    char ch;
    int l=str.length();
    for(int i=0,z=l-1;i<l/2;i++,l--)
    {
        ch=str[i];
        str[i]=str[z];
        str[z]=ch;
    }
}
int main()
{
    int a=Search_pattern("saurabh","rabh");
    cout<<a<<endl;
    return 0;
}