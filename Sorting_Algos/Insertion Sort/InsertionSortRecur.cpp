#include <bits/stdc++.h>
using namespace std;

void insertionsortrecur(int arr[],int size);
int main(void)
{
    int arr[]={4,3,1,10,12,5,6,-1};
    int n =sizeof(arr)/sizeof(arr[0]);
    insertionsortrecur(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
void insertionsortrecur(int arr[],int size)
{
    int s =size;
    if(size == 1)
        return;
    insertionsortrecur(arr,size-1);
    int last=arr[size-1];

    int j =size-2;

    while(j>=0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
