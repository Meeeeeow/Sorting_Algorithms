#include<bits/stdc++.h>
using namespace std;

void mergesort(int arr[],int l,int r);
void merge(int arr[],int l,int m,int r);
int main(void)
{
    int arr[]={12,11,13,5,7};
    int l=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"initial Array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<< " ";

    mergesort(arr,l,n-1);
    cout<<endl<<"After sorting:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<< " ";

    return 0;
}
void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2 =r-m;

    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i] = arr[l+i];
    for(int j=0;j<n2;j++)
        R[j] = arr[m+1+j];

    int i = 0;
    int j = 0;
    int k = l;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
        while(i<n1){
            arr[k] = L[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }

}
void mergesort(int arr[],int l,int r)
{

    if(l<r)
    {
        int m =l+(r-l)/2;

        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
