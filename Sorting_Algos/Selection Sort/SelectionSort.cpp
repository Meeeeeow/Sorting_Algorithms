#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[] , int size);
void inputarray(int arr[],int size);
void printarray(int arr[],int size);
int main(void)
{
    int n ;
    cout<<"Enter a nubmer : ";
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    cout<<"initial Array:\n";
    printarray(arr,n);
    selectionsort(arr, n);
    cout<<"\nAfter sorted Array:\n";
    printarray(arr,n);
    return 0;
}
void inputarray(int arr[] ,int size)
{
    for (int i = 0;i<size;i++)
        cin>>arr[i];
}

void selectionsort(int arr[] , int size)
{
    int temp = 0;
    for(int i=0;i<size;i++)
    {
        int min_index = i;
        for(int j = i+1;j<size;j++)
        {
            if(arr[min_index] > arr[j])
                min_index = j;
        }
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
        /*int key = arr[min_index];
        while(min_index>i)
        {
            arr[min_index] = arr[min_index-1];
            min_index--;
        }
        arr[i] = key;*/

}
}
void printarray(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

