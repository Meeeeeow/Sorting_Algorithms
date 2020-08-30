#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n ;

    int small = 97,counter =0;
    cin>>n;
    char arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    for(int i =0;i<n;i++)
        arr[i] = tolower(arr[i]);

    sort(arr,arr+n);
    for(int i =0;i<n;i++)
        if(arr[i] != arr[i+1])
            counter++;
   if(counter == 26)
        cout<<"YES";
   else
        cout<<"NO"<<endl;


    return 0;
}
