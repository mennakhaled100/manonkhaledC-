#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;

    int spaces=t-1;
    int star=1;
    for(int i=1; i<=t; i++)
    {
        for(int j=1; j<=spaces; j++)
        {
            cout<<" ";
        }
        spaces--;
        for(int as=1; as<=star; as++)
        {
            cout<<"*";
        }
        star+=2;

        cout<<"\n";
    }


    return 0;
}


