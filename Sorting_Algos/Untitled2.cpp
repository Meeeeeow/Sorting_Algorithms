#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main(void)
{
    int arr[]={10,7,8,9,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

void quicksort(int arr[],int low,int high)
{
    if(low < high)
    {
        int pivotal_point = partition(arr,low,high);

        quicksort(arr,low,pivotal_point-1);
        quicksort(arr,pivotal_point+1,high);
    }
}

int partition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i = low + 1;
    for(int j = low + 1;j<=high;j++)
    {
        if(arr[j] < pivot)
        {

            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i-1],arr[low]);
    return i-1;

}
