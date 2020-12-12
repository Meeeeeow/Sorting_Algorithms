
#include<iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,j=n-1,max,k=0;
    int sereja=0,dima=0;
    while(i<=j)
    {
        if(a[i]>=a[j])
        {
            if(k%2==0)
                sereja+=a[i];
            else
                dima +=a[i];
           i++;
        }
        else{
           if(k%2==0)
                sereja+=a[j];
            else
                dima +=a[j];
            j--;
        }
     k++;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;

}
