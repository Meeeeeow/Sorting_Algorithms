#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int size,int index);
int main(void)
{
    int arr[] ={4,3,2,10,12,1,5,6};
    int index  = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n,index);
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
void insertionsort(int arr[],int size,int index)
{
        if(index == size)
            return;
        for(int j=0;j<index;j++)
        {

            if(arr[index] > arr[j])
                {
                    int sortingfactor = index;
                    int key =arr[index];
                    while(sortingfactor > j)
                    {
                       arr[sortingfactor] =arr[sortingfactor - 1];
                       sortingfactor--;
                    }
                    arr[j] = key;
                    cout<<"Index "<<index<<endl;
                    for(int i=0;i<size;i++)
                        cout<<arr[i]<<" ";
                    cout<<endl;
                    break;
                }
        }

     insertionsort(arr, size,index+1);


}

