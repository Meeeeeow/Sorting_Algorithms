#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,counter = 0;
        cin>>a>>b;
        if(a > b)
            swap(a,b);
        while(a != b)
        {
            if(b - a >= 10)
                {
                    a += 10;
                    counter++;
                }
            else
                {
                    a +=(b-a);
                    counter++;
                }
        }
        cout<<counter<<endl;
    }
    return 0;
}
