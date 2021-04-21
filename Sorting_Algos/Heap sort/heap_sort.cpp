#include<bits/stdc++.h>
using namespace std;
void heapsort(int *arr,int s);
void build_max_heap(int *arr,int s);
void max_heapify(int *arr,int i,int s);
void input_array(int *arr,int s);
void print_array(int *arr,int s);
int left(int i);
int right(int i);

int main(void)
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    input_array(arr,n);
    cout<<"Before sorting"<<endl;
    print_array(arr,n);
    heapsort(arr,n);
    cout<<"After sorting:"<<endl;
    print_array(arr,n);

    return 0;
}
void input_array(int *arr,int s)
{
    for(int i=0;i<s;i++)
        cin>>arr[i];
}
void print_array(int *arr,int s)
{
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void heapsort(int *arr,int s)
{
    build_max_heap(arr,s); /// comes back with the max or min heap
    for(int i= s ;i> 1;i--) ///heap sort here
    {
        swap(arr[0],arr[i - 1]);/// swaps 1st and last element
        s--;
        max_heapify(arr,1,s);
    }

}
void build_max_heap(int *arr,int s)
{
    for(int i = floor(s/2);i>0;i--) /// tree height
        max_heapify(arr,i,s);
}
void max_heapify(int *arr,int i,int s)
{

    int l,r,largest;
    l = left(i);
    r = right(i);
    if(l <= s and arr[l - 1] > arr[i - 1] )
            largest = l;
    else
        largest = i;
    if(r <= s &&  arr[r - 1] > arr[largest - 1] )
            largest = r;

    if(largest != i)
    {
        int temp = arr[i - 1];
        arr[i - 1] = arr[largest - 1];
        arr[largest - 1] = temp;
        max_heapify(arr,largest,s);
    }
}
int left(int i)
{
    return 2*i;

}
int right(int i)
 {
     return (2*i) + 1;
 }
