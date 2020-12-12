#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,counter=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        vector<int>v;
        if(n==1)
            cout<<"1"<<endl;
        else{
            for(int i=0;i<n;i++)
        {
            if(count(arr,arr+n,arr[i]) == 1)
            {
                v.push_back(arr[i]);
                counter++;
            }
        }
        if(counter==0)
            cout<<"-1"<<endl;
        else
        {

            int min=*min_element(v.begin(),v.end());
            int itr = *find(arr,arr+n,min);
            cout<<itr+1<<endl;
        }
        }

    }
    return 0;
}

