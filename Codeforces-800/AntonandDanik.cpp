#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,anton =0 ,danik = 0;
    cin>>n;
    char arr[n];
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    if(count(arr,arr + n,'A') > count(arr,arr + n,'D'))
            cout<<"Anton"<<endl;
    else if(count(arr,arr + n,'A') < count(arr,arr + n,'D'))
            cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;


    return 0;
}

