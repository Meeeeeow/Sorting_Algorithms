#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,opinion,review = 0;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin>>opinion;
        if(opinion == 1)
            review++;
    }
    if(review > 0)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
