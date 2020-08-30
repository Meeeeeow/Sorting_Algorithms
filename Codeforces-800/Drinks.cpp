#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    double n,a,total_orange = 0,volume_fraction = 0;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>a;
        total_orange += a;
    }
    cout<<setprecision(12)<<total_orange / n<<endl;
    return 0;
}
