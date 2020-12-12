#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,l;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        vector<int>vec;
        vector<int>used(2*l);
        vector<int>v;
        for(int i=0;i<(2*l);i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        fill(used.begin(),used.end(),0);
       for(int i=0;i<(2*l);i++)
       {
           if(used[vec[i]] == 0)
           {
               used[vec[i]] = 1;
               v.push_back(vec[i]);
           }
       }
       for(int i=0;i<l;i++)
        cout<<v[i]<<" ";
       cout<<endl;
    }
    return 0;
}
