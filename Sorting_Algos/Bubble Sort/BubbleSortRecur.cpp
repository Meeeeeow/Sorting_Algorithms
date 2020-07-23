#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void pushvalues(vector<int>&v , int size);
void bubblerecursion(vector<int>&v,int size);
void printvalues(vector<int>&v);

int main(void)
{
    int n;
    vector<int>sorted;
    cout<<"Enter a value ";
    cin>>n;
    pushvalues(sorted , n);
    cout<<"Initial array : \n";
    printvalues(sorted);
    cout<<"\n";
    bubblerecursion(sorted , n);
    cout<<"after sorting:\n";
    printvalues(sorted);
    return 0;
}
void pushvalues(vector<int>&v , int size)
{
    int a;
    for(int i =0;i<size;i++)
    {
        cin>>a;
        v.push_back(a);
    }
}
void bubblerecursion(vector<int>&v , int size)
{
    int temp =0;
    if(size == 1)
        return ;
    for(int i =0;i<v.size()-1;i++)
    {
      for(int j=0;j<v.size()-i-1;j++)
      {
          if(v[j] >v[j+1])
          {
              temp =v[j];
              v[j] = v[j+1];
              v[j+1] = temp;
          }
      }
    }
    bubblerecursion(v , size-1);
}
void printvalues(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
