#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,m,counter = 0;
    cin>>n>>m;
    char arr[n][m];
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {

            if(i%2 != 0)
                arr[i-1][j-1] = '#';
            else{
                if(i % 2 == 0 && counter == 0)
                    {
                        arr[i-1][j-1] = '.';
                        if(j == m && i / 2 %2 != 0)
                        {
                            arr[i-1][j-1] = '#';
                            counter++;
                        }
                    }
                    else if(i % 2 == 0 && counter == 1)
                    {
                        arr[i-1][j-1] = '.';
                        if(j == 1)
                        {
                            arr[i-1][j-1] = '#';
                            counter= 0;
                        }
                    }
            }
        }
    }
    for(int i = 0;i<n;i++)
        {
            for(int  j= 0;j<m;j++)
                cout<<arr[i][j];
            cout<<endl;
        }
    return 0;
}
