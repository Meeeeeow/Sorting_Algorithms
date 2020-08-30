#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,a,b;
    cin>>n;
    while(n > 0)
    {
        cin>>a>>b;
        if(a > b)
            {
                if(a %b != 0)
                    cout<<((a / b +1)*b) - a<<endl;
                else
                    cout<<a % b<<endl;
            }
        else
            cout<<b - a<<endl;
        n--;
    }
    return 0;
}
