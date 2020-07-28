#include<bits/stdc++.h>
using namespace std;
void insertionsort(vector<int>&arr,int size);
int main(void)
{
    int arr[] = {2, 1, 5, 3, 7, 5, 4, 6};

    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr,arr+n);
    insertionsort(vect,n);
    return 0;
}
void insertionsort(vector<int>&arr,int size)
{
    for(int i=1;i<size;i++)
    {

        for(int j=0;j<i;j++)
        {

            if(arr[j] > arr[i])
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

