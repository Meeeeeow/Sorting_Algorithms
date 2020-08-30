#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int friends_distance;
    cin>>friends_distance;
    if(friends_distance % 5 == 0)
        cout<< friends_distance / 5;
    else
        cout<< (friends_distance / 5) + 1;
    return 0;
}

