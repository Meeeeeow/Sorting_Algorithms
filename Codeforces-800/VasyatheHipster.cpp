#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,m,counter = 0,counter1 = 0;
    cin>>n>>m;
    while(n > 0 || m > 0)
    {
        if(n == 0 && m  > 1)
            {
                m -= 2;
                counter1++;
            }
        else if(m == 0 && n > 1)
            {
                n -= 2;
                counter1++;
            }
        else if(n >=1 && m>= 1)
        {
            n--;
            m --;
            counter++;
        }
        else
            n = m = 0;
    }
    cout<<counter<<" "<<counter1;
    return 0;
}
