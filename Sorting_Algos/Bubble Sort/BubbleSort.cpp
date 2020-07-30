#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void inputarray(int arr[],int size);
void bubblesort(int arr[], int size);
void printarray(int arr[],int size);

int main(void){
    int n;
    cout<<"Please enter number";
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    cout<<"initial array:\n";
    printarray(arr,n);
    cout<<"\n";
    int s=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,s);
    cout<<"array after sorting:\n";
    printarray(arr,s);
    return 0;
}
//for input
void inputarray(int arr[],int size)
{
    for (int i =0 ;i<size;i++)
    {
        cin>>arr[i];
    }

}
//sorting
void bubblesort(int arr[],int size)
{
    int temp =0;
    for (int i =1 ;i<size + 1;i++)
    {
        int counter = 0;

        for(int j =0 ;j<size-i;j++)
        {
            if (arr[j] > arr[j+1])
            {
                //cout<<arr[j]<<" "<<arr[j+1]<<"\n";
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                //cout<<arr[j]<<" "<<arr[j+1]<<"\n";
                counter++;
            }

        }
        cout<<"pass "<<i<<":\n";
        for (int k =0 ;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<"\n";

        if(counter == 0)
                {
                    //cout<<"the array is sorted at position "<<i+1<<"\n";
                    break;
                }


    }

}
//print
void printarray(int arr[],int size)
{
    for (int i =0 ;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
