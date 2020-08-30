#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<int>vec;
    for(int i = 0;i<n -1 ;i++)
    {
        int a = i+2;
        vec.push_back(a);
    }

    for(int i = 0;i<vec.size();i++)
    {
        int p = vec[i];
        for(int j = 0;j<vec.size();j++)
        {
            int a = pow(p,2);
            if(vec[j] % p == 0 && vec[j] >= a)
                vec.erase(find(vec.begin(),vec.end(),vec[j]));
        }
    }
    for(int i = 0;i<vec.size() ;i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
