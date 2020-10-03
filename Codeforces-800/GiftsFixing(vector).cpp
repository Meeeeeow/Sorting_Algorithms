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
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++)
            {
                int c;
                cin>>c;
                a.push_back(c);
            }
        for(int i=0;i<n;i++)
            {
                int c;
                cin>>c;
                b.push_back(c);
            }
        for(int i=0;i<n;i++)
        {
            sum +=max((a[i]-*min_element(a.begin(),a.end())),(b[i]-*min_element(b.begin(),b.end())));
        }
        cout<<sum<<endl;
    }
    return 0;
}

