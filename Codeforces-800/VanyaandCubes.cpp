#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int i=1,sum=0;
    while(i)
    {
       for(int j=1;j<=i;j++) //(h*(h+1))/2 eta dieo kora jeto
            sum+=j;


       if(sum>n)
       {
           cout<<i-1<<endl;
           break;
       }
       i++;
    }
    return 0;
}
