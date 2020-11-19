#include<bits/stdc++.h>
using namespace std;
void inputarray(int arr[],int s);
void printarray(int arr[],int s);
void mergesort(int arr[],int r,int l=0);
void merge(int arr[],int l,int m,int r);
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    cout<<"Array input is"<<endl;
    printarray(arr,n);
    mergesort(arr,n-1);
    cout<<endl;
    cout<<"After sorting"<<endl;
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
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void mergesort(int arr[],int r,int l)
{
    if(l<r)
    {
        int mid = l+(r-l)/2;
        mergesort(arr,mid,l);
        mergesort(arr,r,mid+1);
        merge(arr,l,mid,r);
    }
}

void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i] = arr[l+i];
    for(int i=0;i<n2;i++)
        R[i] = arr[m+1+i];
    int i =0,j =0,k =l;

    while(i<n1 && j<n2)
    {
        if(L[i]<R[j]) //just sign change and descending order
        {
            arr[k] = L[i];
            i++;
            k++;
        }else{
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}

