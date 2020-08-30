#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int k,l,m,n,d,counter = 0;
    cin>>k>>l>>m>>n>>d;
    if(k == 1 || l == 1 || m == 1 || n == 1)
        cout<<d<<endl;
    else{
        int dragons = d;
        while(d)
        {
            if(d % k != 0 && d % l != 0 && d % m != 0 && d % n != 0)
                counter++;
            d--;
        }
        cout<<dragons - counter<<endl;
    }
    return 0;
}
