#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,counter=0;
    cin>>n;
    for(int i=1;i<=(n/2);i++)
        if((n-i)%i==0)
            counter++;
    cout<<counter<<endl;
    return 0;
}
