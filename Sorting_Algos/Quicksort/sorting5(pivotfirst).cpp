#include<bits/stdc++.h>
using namespace std;
void inputarray(int arr[],int s);
void printarray(int arr[],int s);
int partition(int arr[],int s,int e);
void quicksort(int arr[],int e,int s = 0);
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    cout<<"Array before sorting"<<endl;
    printarray(arr,n);
    quicksort(arr,n);
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
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void quicksort(int arr[],int e,int s)
{
    if(s<e)
    {
        int p = partition(arr,s,e);
        quicksort(arr,p-1,s);
        quicksort(arr,e,p+1);
    }
}
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];//pivot is first
    cout<<"pivot is "<<pivot<<endl;
    int pivotindex=s + 1;
    for(int i=s + 1;i<=e;i++)
    {
        if(arr[i]<pivot)
        {
            int temp =arr[i];
            arr[i] = arr[pivotindex];
            arr[pivotindex]=temp;
            pivotindex++;
        }
    }
    int temp = arr[s];
    arr[s]=arr[pivotindex - 1];
    arr[pivotindex -1]=temp;

    for(int i=0;i<e;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return pivotindex-1;
}

