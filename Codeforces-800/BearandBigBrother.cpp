#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int limak_weight,bob_weight,counter = 0;
    cin>>limak_weight>>bob_weight;
    while(true)
    {
        limak_weight *= 3;
        bob_weight *= 2;
        counter++;
        if(limak_weight > bob_weight)
            break;
    }
    cout<<counter<<endl;
    return 0;
}
