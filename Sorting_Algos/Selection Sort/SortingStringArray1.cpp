#include<bits/stdc++.h>
using namespace std;

void inputarray(string arr[] , int size);
void selectionsortreccursion(string arr[] , int size ,int index);
void printarray(string arr[] , int size);

int main(void)
{
    int n,index = 0;
    cout<<"enter a value: ";
    cin>>n;
    string arr[n];
    inputarray(arr,n);
    cout<<"Array before sorting:\n";
    printarray(arr,n);
    selectionsortreccursion(arr,n,index);
    cout<<"\narray after sorting:\n ";
    printarray(arr,n);
    return 0;
}

void inputarray(string arr[] , int size)
{
    for (int i =0;i<size;i++)
        cin>>arr[i];
}
void selectionsortreccursion(string arr[] , int size ,int index)
{
    if(index == size)
        return;
    for(int i =0;i<size-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<size;j++)
        {
           if(arr[min_index] > arr[j])
           {
               min_index = j;
           }
        }
        string key = arr[min_index];
        while(min_index > i)
        {
            arr[min_index]  = arr[min_index - 1];
            min_index--;
        }
        arr[i]  = key;
    }
    selectionsortreccursion(arr,size,index+1);
}
void printarray(string arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}

