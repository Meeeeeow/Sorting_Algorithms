#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n , t;
    cin>>n;
    while(n --)
    {
        cin>>t;
        int arr[t],sum_even  = 0 , sum_odd =0 , k = 1;
        for(int i =1;i<=t/2;i++)
        {
            arr[i - 1] = 2*i;
            sum_even += arr[i - 1];
        }
        for(int i =t/2;i<t - 1;i++)
        {
            arr[i] = k;
            k += 2;
            sum_odd += arr[i];
        }

        if((sum_even - sum_odd) % 2 != 0)
        {
            arr[t - 1] = sum_even - sum_odd;
            cout<<"YES"<<endl;
            for(int i = 0;i<t;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }else
            cout<<"NO"<<endl;

        if(n == 0)
            break;


    }

    return 0;
}

