#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int n,people_living,accomodation,counter = 0;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>people_living>>accomodation;
        if(people_living < accomodation && (accomodation - people_living > 1))
            counter++;
    }
    cout<<counter<<endl;

    return 0;
}
