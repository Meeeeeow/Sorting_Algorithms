#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
       if(abs(a -b ) % 10 != 0)
          cout<<(abs(a - b) / 10) + 1<<endl;
       else
           cout<<(abs(a - b) / 10) <<endl;

    }
    return 0;
}

