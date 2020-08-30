#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int arr[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j =0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    if(arr[2][2] == 1)
        {
            cout<<0<<endl;
        }
    else{
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(arr[i][j] == 1){
                    int numofswaps = 0;
                    numofswaps = abs(2 - i) + abs(2 - j);
                    cout<<numofswaps<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
