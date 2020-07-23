#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int size);
int main(void)
{
    int arr[] ={4,3,2,10,12,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    return 0;
}
void insertionsort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {

        for(int j=0;j<i;j++)
        {

            if(arr[i] < arr[j])
                {
                    int index = i;
                    cout<<"index :"<<index<<"\n";
                    int key =arr[i];
                    while(index > j)
                    {
                       arr[index] =arr[index - 1];
                       index--;
                       cout<<index<<"\n";
                    }
                    arr[j] = key;
                    for(int i=0;i<size;i++)
                        cout<<arr[i]<<" ";
                    break;
                }
        }
    }

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
