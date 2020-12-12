#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    vector<char>s1;
    for(int i=0;i<10;i++)
    {
        char a;
        cin>>a;
        s1.push_back(a);
    }
    int counter=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s[0] || s1[i]==s[1])
        {
            cout<<"YES"<<endl;
            counter++;
            break;
        }
    }
    if(counter == 0)
        cout<<"NO"<<endl;

    return 0;
}
