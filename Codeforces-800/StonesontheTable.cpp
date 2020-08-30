#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int NumofStones,counter = 0;
    cin>>NumofStones;
    char s[NumofStones];
    for(int i=0;i<NumofStones;i++)
        cin>>s[i];
    for(int i=0;i<NumofStones;i++)
    {
        if(s[i] == s[i+1])
            counter++;
    }
    cout<<counter;
    return 0;
}
