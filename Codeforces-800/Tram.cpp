#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int NumofStops,depart,ride,capacity = 0,min_capacity = 0;
    cin>>NumofStops;
    for(int i =0 ;i < NumofStops;i++)
    {
        cin>>depart>>ride;
        capacity = (capacity - depart) + ride;
        cout<<capacity;
        if(capacity > min_capacity)
            min_capacity = capacity;
    }
    cout<<min_capacity<<endl;

    return 0;
}
