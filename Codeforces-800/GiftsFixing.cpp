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
        for(int i=0;i<n;i++)
        {
            sum +=max((a[i]-*min_element(a,a + n)),(b[i]-*min_element(b,b + n)));
        }
        cout<<sum<<endl;
    }
    return 0;
}
