#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,sum=0;
    cin>>n;
    char curr[n];
    char safe[n];
    for(int i=0;i<n;i++)
        cin>>curr[i];
    for(int i=0;i<n;i++)
        cin>>safe[i];
    for(int i=0;i<n;i++)
    {
        if((curr[i]-'0') >= (safe[i]-'0'))
           {
            if(abs((safe[i]-'0')-(curr[i]-'0'))>((safe[i]-'0')+10)-(curr[i]-'0'))
                sum+=((safe[i]-'0')+10)-(curr[i]-'0');
            else
                sum+=abs((safe[i]-'0')-(curr[i]-'0'));
            }
            else
            {
                if(abs((curr[i]-'0')-(safe[i]-'0'))>((curr[i]-'0')+10)-(safe[i]-'0'))
                    sum+=((curr[i]-'0')+10)-(safe[i]-'0');
                else
                    sum+=abs((curr[i]-'0')-(safe[i]-'0'));
            }
    }
    cout<<sum<<endl;
    return 0;
}
