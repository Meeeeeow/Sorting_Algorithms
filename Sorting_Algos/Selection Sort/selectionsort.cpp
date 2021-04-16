#include<bits/stdc++.h>
using namespace std;
void input_array(int arr[],int s);
void print_array(int arr[],int s);
void selection(int arr[],int s);
int value_pos = 0;

int main(void)
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    input_array(arr,n);
    cout<<"Before sorting:"<<endl;
    print_array(arr,n);
    selection(arr,n);
    cout<<"After sorting:"<<endl;
    print_array(arr,n);
    return 0;
}
void input_array(int arr[],int s)
{
    for(int i=0;i<s;i++)
        cin>>arr[i];
}
void print_array(int arr[],int s)
{
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void selection(int arr[],int s)
{

    for(int i =0;i<s;i++)
    {
        int min_value = 99999;
        for(int j =i;j<s;j++)
        {
            if(arr[j] < min_value)
            {
                min_value = arr[j];
                value_pos = j;
            }
        }
        int temp = arr[value_pos];
        arr[value_pos] = arr[i];
        arr[i] = temp;

    }
}
