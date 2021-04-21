#include<bits/stdc++.h>
using namespace std;
void input_vec(vector<int>&v,int s);
void print_vec(vector<int>&v);
void heapsort(vector<int>&v);
void build_max_heap(vector<int>&v);
void max_heapify(vector<int>&v,int i,int s);
int left(int i);
int right(int i);
int main(void)
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>v;
    input_vec(v,n);
    cout<<"Before sorting"<<endl;
    print_vec(v);
    heapsort(v);
    cout<<"After sorting"<<endl;
    print_vec(v);
    return 0;
}
void input_vec(vector<int>&v,int s)
{
    for(int i=0;i<s;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
}
void print_vec(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void heapsort(vector<int>&v)
{
    build_max_heap(v);
    int heap_size = v.size();
    for(int i=v.size();i>1;i--)
    {
        swap(v[0],v[i - 1]);
        heap_size--;
        max_heapify(v,1,heap_size);

    }
}
void build_max_heap(vector<int>&v)
{
    for(int i=floor(v.size() / 2);i>0;i--)
        max_heapify(v,i,v.size());
}
void max_heapify(vector<int>&v,int i,int s)
{
    int l,r,largest;
    l = left(i);
    r = right(i);
    if(l <= s && v[l - 1] < v[i - 1])
        largest = l;
    else
        largest = i;
    if(r<=s && v[r - 1] < v[largest - 1])
        largest = r;
    if(largest != i)
    {
        swap(v[largest - 1],v[i - 1]);
        max_heapify(v,largest,s);
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
