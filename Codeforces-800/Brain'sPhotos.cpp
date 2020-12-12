#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int r,c,x=0,x1=0;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(arr[i][j]== 'W' || arr[i][j]=='B' || arr[i][j]=='G')
                x++;
           else
                x1++;
        }
    }
    if(x == (r*c))
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
    return 0;
}
