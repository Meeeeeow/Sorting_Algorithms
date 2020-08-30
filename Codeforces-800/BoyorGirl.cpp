#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    string str;
    int distinct_char = 0;
    getline(cin,str);
    sort(str.begin(),str.end());
    for(int i = 0;i <= str.length()-1;i++)
        if(str[i] != str[i+1])
            distinct_char++;
    if(distinct_char % 2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;


    return 0;
}
