#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x = min(((k*l)/nl),(c*d));
    cout<<min(x,(p/np))/n<<endl;
    return 0;
}
