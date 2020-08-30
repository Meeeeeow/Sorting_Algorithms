#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{

    string stream;
    getline(cin,stream);
    for(int i=0;i<=stream.length();i+=2)
    {
        for(int j=i+2;j<=stream.length();j+=2)
        {
            if(stream[i] > stream[j])
            {
                int temp = stream[i];
                stream[i] = stream[j];
                stream[j] = temp;
            }
        }
    }
    cout<<stream;
    return 0;
}
