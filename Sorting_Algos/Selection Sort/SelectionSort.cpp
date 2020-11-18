#include<bits/stdc++.h>
using namespace std;
void inputarray(int arr[],int s);
void printarray(int arr[],int s);
void selectionsort(int arr[],int s);
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    cout<<"Array after input"<<endl;
    printarray(arr,n);
    selectionsort(arr,n);
    cout<<endl;
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
    for(int i =0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}

void selectionsort(int arr[],int s)
{
    int temp;
    for(int i=0;i<s;i++)
    {
        int min_index=i,counter =0;
        for(int j=i+1;j<s;j++)
        {
            if(arr[min_index] > arr[j])
                {
                    min_index = j;
                    counter++;
                }
        }
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
        if(counter == 0)
        {
            cout<<i<<endl;
            break;
        }
    }
}
