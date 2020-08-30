    #include<bits/stdc++.h>
    #include<iostream>
    using namespace std;
    int main()
    {
        int n,flag=0,minindex,maxindex;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max=arr[0];
        int min=arr[0];
        for(int i=0;i<n;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];

                maxindex=i;


            }
            if(min>=arr[i])
            {
                min=arr[i];

                minindex=i;

            }

        }

         if(maxindex>minindex)
         {
             cout<<maxindex-1+(n-minindex)-1;
         }
         else
            cout<<maxindex-1+(n-minindex);

        return 0;
    }
