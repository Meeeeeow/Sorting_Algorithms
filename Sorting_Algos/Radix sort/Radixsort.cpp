#include<bits/stdc++.h>
using namespace std;
void inputarray(int arr[],int s);
void printarray(int arr[],int s);
int getmax(int arr[],int s);
int *radixsort(int arr[],int s);
int *countingsort(int arr[],int s,int div);
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    cout<<"Before sorting:"<<endl;
    printarray(arr,n);
    int *p = radixsort(arr,n);
    cout<<endl;
    cout<<"After sorting"<<endl;
    printarray(p,n);
    return 0;
}
void inputarray(int arr[],int s)
{
    for(int i=0;i<s;i++)
        cin>>arr[i];
}
void printarray(int arr[],int s)
{
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
}
int getmax(int arr[],int s)
{
    int max=arr[0];
    for(int i=1;i<s;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int *radixsort(int arr[],int s)
{
    int *z;
    int m = getmax(arr,s);
    for(int i=1;m/i>0;i*=10)
        z = countingsort(arr,s,i);
    return z;
}
int *countingsort(int arr[],int s,int div)
{
    int range=10;
    int count_arr[range]={0};
    int out_arr[s];
    for(int i=0;i<s;i++)
        count_arr[(arr[i]/div)%10]++;
    for(int i=1;i<range;i++)
        count_arr[i]+=count_arr[i-1];
    for(int i=s-1;i>=0;i--) //queue ta maintain korar jnne
        out_arr[--count_arr[(arr[i]/div)%10]] = arr[i];
    for(int i=0;i<s;i++)
            arr[i]=out_arr[i];
    return arr;
}
