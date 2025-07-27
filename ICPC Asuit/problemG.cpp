#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n , m ,k;
    cin>>n>>m>>k;
    long long mini=min(min(n,m),(n,k));

    if(mini==n)
        cout<<n;
    else if(mini==m)
    {
        n=(n-m)/2; k=k-m;
        long long mini2=min(n,k);

        if(mini2==k)
            cout<<m+k;
        else if(mini2==n)
            cout<<n+m;
    }
    else if(mini==k)
        cout<<k;
    return 0;
}

