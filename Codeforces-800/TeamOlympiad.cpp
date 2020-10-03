#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int teams = min(min(count(arr,arr+n,1),count(arr,arr+n,2)),count(arr,arr+n,3));
    cout<<teams<<endl;
   while(teams--)
   {
        for(int i =1;i<=3;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j] == i)
                {
                    cout<<j + 1<<" ";
                    arr[j] = 0;
                    break;

                }
            }
        }
    cout<<endl;
   }

    return 0;
}
