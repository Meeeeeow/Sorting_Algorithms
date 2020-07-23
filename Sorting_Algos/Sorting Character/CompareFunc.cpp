#include<bits/stdc++.h>
using namespace std;

void comparestrings(string s1,string s2);

int main(void)
{
    string s1,s2;
    cin>>s1>>s2;
    comparestrings(s1,s2);
    return 0;
}
void comparestrings(string s1,string s2)
{
    if(s1.compare(s2) > 0)
        cout<<s1<<" is greater than "<<s2;
    else if(s1.compare(s2)<0)
        cout<<s1<<" is smaller than "<< s2;
    else if(s1.compare(s2) == 0)
        cout<<"strings are equal";
}
