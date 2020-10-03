#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,counter=0,counter1 = 0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i+=2)
            if(a[i] % 2 != 0)
                counter++;
        for(int i =1;i<n;i+=2)
            if(a[i] % 2 == 0)
                counter1++;
        if(counter == counter1)
            cout<<counter<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
