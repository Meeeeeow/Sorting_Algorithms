#include<bits/stdc++.h>
using namespace std;
void inputarray(int arr[],int s);
void printarray(int arr[],int s);
void insertionsortrecur(int arr[],int s);
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    cout<<"Array before"<<endl;
    printarray(arr,n);
    insertionsortrecur(arr,n);
    cout<<endl;
    cout<<"Array after sorting"<<endl;
    printarray(arr,n);
    return 0;
}
void inputarray(int arr[],int s)
{
    for(int i =0;i<s;i++)
        cin>>arr[i];

}
void printarray(int arr[],int s)
{
    for(int i =0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void insertionsortrecur(int arr[],int s)
{
    if(s == 1)
        return;
    insertionsortrecur(arr,s-1);
    int key = arr[s - 1];
    int j = s - 2;
    while(j>=0 && arr[j] < key)
    {
        arr[j + 1] =arr[j];
        j--;
    }
    arr[j+1] =key;
}
