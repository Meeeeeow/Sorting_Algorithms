#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin>>s;
    sort(s.begin() , s.end());
    cout<<s;
    int l =s.size();
    for(int i=0;i<l-1;i++)
    {
      int index = i;
      for(int j=i+1;j<l;j++)
      {
          if(s[index] > s[j])
            index = j;
      }
      int key =s[index];
      while(index > i)
      {
          s[index] = s[index-1];
          index--;
      }
      s[i]=key;
    }
    cout<<s;
    return 0;
}
