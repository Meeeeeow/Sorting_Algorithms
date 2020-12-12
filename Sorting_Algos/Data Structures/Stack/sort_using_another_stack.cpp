#include<bits/stdc++.h>
using namespace std;
void showStack(stack<int>s);
void tempStack(stack<int>s);
int main(void)
{
    stack<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    showStack(s);
    return 0;
}
void showStack(stack<int>s)
{
    stack<int>s1;
    while(!s.empty())
    {
        int a = s.top();
        cout<<"elements taken out: "<<a<<endl;
        s.pop();
        while(!s1.empty() && s1.top() > a)
        {
           s.push(s1.top());
           s1.pop();
        }
        s1.push(a);
        cout<<"Input Stack "<<endl;
        tempStack(s);
        cout<<"Temp stack "<<endl;
        tempStack(s1);
        cout<<endl;
    }
    cout<<endl;
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
}
void tempStack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
