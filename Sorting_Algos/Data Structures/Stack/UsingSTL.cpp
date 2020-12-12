#include<bits/stdc++.h>
using namespace std;
void createStack(stack<int>s);
int main(void)
{
    stack<int>s;
    int sum = 0;
    cout<<"Enter how many you want to push"<<endl;
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        sum += a;
        s.push(a);
    }
    createStack(s);
    cout<<"Sum from main "<<sum<<endl;

    cout<<"Stack size "<<s.size()<<endl;
    cout<<"Stack top :"<<s.top()<<endl;
    cout<<"popped value "<<endl;
    s.pop(); //pop() er value dekhai naaa
    s.push(4);
    createStack(s);
    return 0;
}
void createStack(stack<int>s)
{
    int sum = 0;
    while(!s.empty()) //s.size()>0 same
    {
        cout<<s.top()<<" ";
        sum += s.top();
        s.pop();
    }
    cout<<endl;
    cout<<"Sum from calling function is "<<sum<<endl;

}
