#include<bits/stdc++.h>
using namespace std;
int MAX_CHAR=26;
void sortstring(string s);
int main(void)
{
    string s;
    cin>>s;
    sortstring(s);
    cout<<'g'-'a';

    return 0;
}
void sortstring(string s)
{
    int char_count[MAX_CHAR] ={0};

    for(int i =0;i<s.length();i++)
    {
        cout<<"value of"<<char_count[s[i]]<<"\n";
        char_count[s[i]-'a']++;
        cout<<"valueofs"<<char_count<<"\n";

    }
    for(int j=0;j<MAX_CHAR;j++)
    {

        for(int i=0;i<char_count[j];i++)
        {
            cout<<(char)('a'+j);
        }
    }
}
