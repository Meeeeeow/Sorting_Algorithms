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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr + n);
        int min_value = abs(arr[0] - arr[1]);
        for(int i = 1;i<n - 1;i++)
        {
            if(abs(arr[i] - arr[i + 1]) < min_value)
                min_value = abs(arr[i] - arr[i + 1]);
        }
        cout<<min_value<<endl;
    }
    return 0;
}
