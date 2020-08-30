#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,k;
    cin>> n >> k;
    while(k--)
    {
        if(n % 10 == 0)
            n /= 10;
        else
            n--;
        if(k == 0)
            break;
    }
    cout<<n<<endl;
    return 0;
}
