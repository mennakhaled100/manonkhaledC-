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

    /*int n;  cin>>n;
    int spaces=n-1;
    int astricks=1;
    for(int i3=1; i3<=n; i3++)
    {
        for(int j3=1; j3<=spaces; j3++)
        {
            cout<<" ";
        }
         spaces--;
        for(int stars=1; stars<=astricks; stars++)
        {
            cout<<"*";

        }
        astricks+=2;

        cout<<"\n";
    }
*/
    return 0;
}


