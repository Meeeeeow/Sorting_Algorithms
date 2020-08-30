#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int friends_distance;
    double min_steps = 1;
    cin>>friends_distance;
    int steps[5]={1,2,3,4};
    if(friends_distance > 5)
        min_steps = friends_distance / 5;
     friends_distance -=(min_steps*5);
     for(int i=1;i<=4;i++)
        {
            if(friends_distance / i == 1 && friends_distance % i == 0)
            {
                min_steps++;
                cout<<i;
                if(friends_distance - i == 0)
                    break;
            }
        }
     cout<<min_steps<<endl;

    return 0;
}
