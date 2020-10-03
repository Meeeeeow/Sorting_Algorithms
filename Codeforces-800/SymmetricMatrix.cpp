#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int arr[2][2];
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c = 0,n;
        cin>>a>>b;
        string s = "NO";
           n = a;
           while(a--)
            {
                for(int i =0;i<2;i++)
                {
                    for(int j= 0;j<2;j++)
                        cin>>arr[i][j];
                }
                 if(arr[0][1] == arr[1][0] && b % 2 == 0)
                    s="YES";

            }


            if(s =="YES")
                    cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
    return 0;
}
