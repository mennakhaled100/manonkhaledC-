#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n ;

    if(n==1)
        cout<<0;
    else if(n==2)
        cout<<0<<" "<<1<<" ";
    else
    {
        cout<<0<<" "<<1<<" ";
        int base=0;
        int next=1;
        for(int i=3;i<=n; i++)
        {
             int fab = base + next;
             cout<<fab<<" ";
             base=next;
             next = fab;
        }


    }
    return 0 ;
}

