#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void pushvalues(vector<int>&v,int size);//we are taking this as pass by reference otherwise it will just create c copy of vector
void printvalues(vector<int>&v);
void bubblesort(vector<int>&v);
void duplicate(vector<int>&v);
int main(void)
{

    vector<int>sorted;
    int n;
    cout<<"Please enter a number: ";
    cin>>n;
    pushvalues(sorted,n);
    cout<<"initial array:\n";
    printvalues(sorted);
    cout<<"\n";
    bubblesort(sorted);
    duplicate(sorted);
    cout<<"after sorting: \n";
    printvalues(sorted);
    return 0;
}
void pushvalues(vector<int>&v,int size)
{
    int a;

    for (int i=0;i<size;i++)
    {
        cin>>a;
        v.push_back(a);
    }
}
void bubblesort(vector<int>&v)
{
    int temp = 0 ,counter = 0;
    for(int i=1;i<v.size() + 1;i++)
    {

        for (int j =0;j<v.size()-i;j++)
        {
            if(v[j]>v[j+1])
            {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                counter++;
            }
        }
        if(counter == 0)
            break;
        counter =0;
    }
}

void duplicate(vector<int>&v)
{
    int counter =0;
    for(int i =0;i<v.size()-1;i++)
    {
        for(int j =i+1;j<v.size();j++)
        {
            if(v[i] == v[j])
            {
                counter++;
                cout<<"duplicate value is "<<v[i]<<"\n";
            }
        }
        counter = 0;
    }
}
void printvalues(vector<int>&v)
{

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
