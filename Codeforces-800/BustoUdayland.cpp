#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,counter=0;
    cin>>n;
    vector<char>v;
    for(int i=0;i<(5*n);i++)
       {
            char c;
            cin>>c;
            v.push_back(c);
       }
    for(int i=0;i<(5*n);i++)
        {
            if(v[i]=='O' && v[i+1]=='O' && (i+1)%5 !=0)
            {
                cout<<"YES"<<endl;
                v[i]=v[i+1]='+';
                counter++;
                break;
            }
        }
        if(counter == 0)
            cout<<"NO"<<endl;
        else{
            int a=1;
            for(int i=1;i<=(5*n);i++)
            {
                if(i==(5*a))
                   {
                       cout<<v[i-1];
                       cout<<"\n";
                       a++;
                   }
                else
                    cout<<v[i-1];
            }

        }

    return 0;
}
