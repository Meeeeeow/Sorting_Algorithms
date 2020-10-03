#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,mishka_total = 0,chris_total = 0;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a > b)
            mishka_total++;
        else if(a < b)
            chris_total++;
    }
    string msg = (mishka_total > chris_total)? "Mishka" :
        (mishka_total < chris_total) ? "Chris" :
            "Friendship is magic!^^";
    cout<<msg<<endl;
    return 0;
}
