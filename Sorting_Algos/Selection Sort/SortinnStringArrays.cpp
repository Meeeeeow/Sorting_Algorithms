#include<bits/stdc++.h>
using namespace std;
void inputarray(string arr[],int size);
void sortingstring(string arr[] , int size);
void printarray(string arr[],int size);
int main(void)
{
    int n;
    cin>>n;
    string arr[n];
    inputarray(arr,n);
    cout<<"Inital array:\n";
    printarray(arr,n);
    sortingstring(arr , n);

    return 0;
}
void inputarray(string arr[],int size)
{
    for(int i =0;i<size;i++)
        cin>>arr[i];
}
void sortingstring(string arr[] , int size)
{
    //sort(arr,arr+size); library use
    int index[size];
    for(int i =0;i<size;i++)
        index[i] = i;

    for(int i=0;i<size-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[index[min_index]].compare(arr[index[j]]) > 0)
                min_index =j;
        }
        int key =index[min_index];
        while(min_index > i)
        {
            index[min_index] = index[min_index-1];
            min_index--;
        }
        index[i] = key;
    }
    cout<<"\n after sorting:\n";
    for(int i=0;i<size;i++)
        cout<<arr[index[i]]<< " ";
}
void printarray(string arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
