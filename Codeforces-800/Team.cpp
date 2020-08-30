#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int problems,cansolve = 0;
    cin>>problems;
    int arr[problems][3];
    for(int i=0;i<problems;i++)
    {
        for(int j = 0;j<3;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<problems;i++)
    {
        int counter = 0;
        for(int j = 0;j<3;j++)
        {
            if(arr[i][j] == 1)
            counter++;
        }
        if (counter > 1)
            cansolve++;
    }
    cout<<cansolve;
    return 0;
}
