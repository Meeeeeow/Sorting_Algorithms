#include<bits/stdc++.h>
using namespace std;
void inputarray(int arr[],int s);
void printarray(int arr[],int s);
int *countingsort(int countingarr[],int inarr[],int outarr[],int s,int r);
int main(void)
{
    int n,range;
    cin>>n>>range;
    int input_arr[n],output_arr[n],count_arr[range]={0};
    inputarray(input_arr,n);
    cout<<"Before sorting"<<endl;
    printarray(input_arr,n);
    cout<<endl;
    int *p= countingsort(count_arr,input_arr,output_arr,n,range);
    cout<<&p<<endl;//address of p in memory
    cout<<p<<endl;//address of countingsort func which will return the array
    cout<<*p<<endl;//array value
    cout<<"After sorting:"<<endl;
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
int *countingsort(int countingarr[],int inarr[],int outarr[],int s,int r)
{
    for(int i=0;i<s;i++)
        countingarr[inarr[i]]++;
    for(int i=1;i<r;i++)
        countingarr[i]+=countingarr[i-1];
    for(int i=0;i<s;i++)
        outarr[--countingarr[inarr[i]]] = inarr[i];
    for(int i=0;i<s;i++)
        inarr[i]=outarr[i];
    return inarr;
}
