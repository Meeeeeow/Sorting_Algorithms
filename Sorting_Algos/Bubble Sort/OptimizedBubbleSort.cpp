#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void inputarray(int arr[],int size);
void bubblesort(int arr[],int size);
void printarray(int arr[],int size);

int main(void)
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    cout<<"initial array:\n";
    printarray(arr,n);
    cout<<"\n";
    bubblesort(arr,n);
    cout<<"array after sorting:\n";
    printarray(arr,n);
    return 0;
}
void inputarray(int arr[],int size)
{

    for (int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void bubblesort(int arr[],int size)
{

    int temp = 0;

    for(int i=0;i<size-1;i++)
    {
        bool swapped = false;
        for(int j =0;j<size-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(swapped == false)
        {

            cout<<"The array is sorted at pass "<<i+1<<"\n";
            break;
        }


    }
}

void printarray(int arr[] , int size)
{
    for (int i =0;i<size;i++)
    {
        cout<<arr[i]<< " ";
    }
}
