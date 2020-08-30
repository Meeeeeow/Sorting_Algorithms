#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    string num,num1;
    getline(cin,num);
    getline(cin,num1);
    string result="";
    for(int i =0;i<num.length();i++)
    {
        if(num[i] == num1[i])
            result+='0';
        else
            result+='1';
    }
    cout<<result<<endl;

    return 0;
}
