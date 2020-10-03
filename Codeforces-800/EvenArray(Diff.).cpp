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
        for(int i=0;i<n;i++)
         {
           int x;
           cin>>x;
           if(x %2 != i % 2)
                if(i%2==0)
                    counter++;
                else
                    counter1++;
         }
         if(counter1 != counter)
            cout<<-1<<endl;
         else
            cout<<counter<<endl;

    }
    return 0;
}

