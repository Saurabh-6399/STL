#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
bool Is_palindrome(string str)
{
    int len=str.size();
    stack<char,vector<char>> s1;
    for(int i=0;i<len/2;i++)
    {
        s1.push(str.back());
        str.pop_back();
    }
    if(len%2) //for odd string
       str.pop_back();
    while(!str.empty())
    {
        if(str.back()!=s1.top())
          return false;
        str.pop_back();
        s1.pop();  
    }   
    return true;
}
void reverse(stack <string> &str)
{
    stack<string> temp;
    while(!str.empty())
    {
        temp.push(str.top());
        str.pop();
    }
    str=temp;
}
int getcode(char ch)
{
    switch(ch)
    {
        case '[':
           return 1;
        case '{':
          return 2;
        case '(':
           return 3;
        case ']':
          return -1;
        case '}':
           return -2;
        case ')':
            return -3;
        default:
           return 0;
    }
}
bool balanced_bracket(string str)
{
    int x;
    if(str.size()%2)
       return false;
    stack<char,vector<char>> s1;   
    for(char ch:str)
    {
        if(ch=='['||ch=='{'||ch=='(')
           s1.push(ch);
        if(ch==']'||ch=='}'||ch==')')
        {
            x=s1.top();
            if(getcode(ch)!=-getcode(x))
              return false;
            s1.pop();   

        }  
    }
    return true;
}
void del_middle_stack(stack<string> &str)
{
    int l=str.size();
    stack<string> temp;
    if(l%2)
    {
        for(int x=l-1;x>=0;x--)
        {
            if(l/2==x)
            {
                str.pop();
                continue;
            }
            temp.push(str.top());
            str.pop();
        }
        while(!temp.empty())
        {
            str.push(temp.top());
            temp.pop();
        }
    }

}
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if(n == 1)
    {
        cout << "Move disk 1 from "
             << source << " -> " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n-1, source, destination, auxiliary);

    // Move largest disk to destination
    cout << "Move disk " << n << " from "
         << source << " -> " << destination << endl;

    // Move n-1 disks from auxiliary to destination
    towerOfHanoi(n-1, auxiliary, source, destination);
}
int main()
{
    int n = 3;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
