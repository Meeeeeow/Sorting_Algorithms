#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int a = 0,counter = 0;
    string guest,host,letters,joined;
    getline(cin,guest);
    getline(cin,host);
    getline(cin,letters);
    joined = guest + host;
    if(joined.length() == letters.length())
    {
        sort(joined.begin(),joined.end());
        sort(letters.begin(),letters.end());
        for(int i = 0;i<joined.length();i+=a)
        {
            a = count(joined.begin(),joined.end(),joined[i]);
            if(count(joined.begin(),joined.end(),joined[i]) != count(letters.begin(),letters.end(),letters[i]))
                counter++;
        }
        string output = (counter > 0) ? "NO" : "YES";
        cout<<output<<endl;
    }else
        cout<<"NO"<<endl;
    return 0;
}
