#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int arr[4],a,b,c,d;
    for(int i =0;i<4;i++)
        cin>>arr[i];
    int max = arr[0];
    for(int i = 1;i<4;i++)
        if(arr[i] > max)
            max = arr[i];
    for(int i = 0;i<4;i++)
          {
              if(max == arr[i])
                    d = 0;
              else
              {
                  arr[i] = max - arr[i];
              }
          }
      sort(arr,arr+4);
      for(int i =0;i<3;i++)
            cout<<arr[i]<<" ";

    return 0;
}
