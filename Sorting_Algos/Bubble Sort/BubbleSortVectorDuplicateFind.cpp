#include<bits/stdc++.h>
using namespace std;
void inputvector(vector<int>&v,int s);
void printvector(vector<int>&v,int s);
void bubblesortrecursive(vector<int>&v,int s);
void duplicatevector(vector<int>&v);
int main(void)
{
    int n;
    cin>>n;
    vector<int>v;
    inputvector(v,n);
    cout<<"Array before input"<<endl;
    printvector(v,n);
    bubblesortrecursive(v,n);
    cout<<endl;
    cout<<"Array after sorting"<<endl;
    printvector(v,n);
    cout<<endl;
    duplicatevector(v);
    return 0;
}

void inputvector(vector<int>&v,int s)
{
    for(int i =0;i<s;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
}

void printvector(vector<int>&v,int s)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}

void bubblesortrecursive(vector<int>&v,int s)
{
    int temp;
    if(s == 1)
        return;
    for(int i=0;i<s-1;i++)
    {
        if(v[i] > v[i+1])
        {
            temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
    }
    bubblesortrecursive(v,s-1);

}
void duplicatevector(vector<int>&v)
{
    int value,counter =0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == v[i+1])
        {
            value = v[i];
            counter++;
        }else
            {
                if(v[i] == value)
                    cout<<"Duplicate found and value is "<<value<<" and count is "<< counter<<endl;
                counter = 0;

            }
    }
}
