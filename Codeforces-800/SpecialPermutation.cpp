#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n;
        int arr[n];
        if(n==3)
        {
            arr[0]=3;arr[1]=1;arr[2]=2;
        }else{
            arr[0]=2;
            arr[1]=1;
            for(int i=2;i<n;i++)
                {
                    arr[i]=x;
                    x--;
                }
                for(int i=0;i<n;i++)
                {
                    if((i+1) == arr[i])
                    {
                        int temp=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=temp;
                    }
                }
        }
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";

        cout<<endl;
    }
    return 0;
}
