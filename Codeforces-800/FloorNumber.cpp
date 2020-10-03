#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        int c = 0,sum = 0;
        cin>>a>>b;
        for(int  i = 0;i<=1000;i++)
        {
            sum = (i * b) + 2;
          if(a <= sum)
            {
                cout<<i + 1<<endl;
                break;
            }

        }

    }
    return  0;
}
