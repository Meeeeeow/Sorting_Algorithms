#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    string s1,s2;
    cin>>s1>>s2;
   for(int i=0;i<s1.length();i++)
   {

       s1[i]=toupper(s1[i]);
       s2[i]=toupper(s2[i]);
   }
   if(s1 == s2)
    cout<<0;
   else if (s1<s2)
    cout<<-1;
   else
    cout<<1;


    return 0;
}
