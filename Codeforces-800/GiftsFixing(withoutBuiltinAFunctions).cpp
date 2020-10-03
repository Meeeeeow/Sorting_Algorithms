#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
       int min_candy = a[0];
        int  min_orange=b[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<min_candy)
                min_candy = a[i];
            if(b[i] < min_orange)
                    min_orange=b[i];
        }
        for(int i=0;i<n;i++)
        {
            if((a[i] - min_candy) <= (b[i] - min_orange))
                sum +=(b[i]-min_orange);
            else if((a[i] - min_candy) >= (b[i] - min_orange))
                sum +=(a[i]-min_candy);
        }
        cout<<sum<<endl;
    }
    return 0;
}

