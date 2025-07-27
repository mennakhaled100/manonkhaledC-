#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int spaces = n-1 ;
    int star =1 ;
    for(int i=0; i<n; i++)
    {
         for(int sp=1; sp<=spaces; sp++)
        {
            cout<<" " ;
        }
        spaces-- ;
        for(int j=0; j<star ; j++)
        {
            cout<<"*";
        }
        star+=2;

        cout<<"\n" ;
    }

    int space = 0;
    int stars =2*n-1;
    for(int i=0; i<n; i++)
    {
         for(int sp=0; sp<space; sp++)
        {
            cout<<" " ;
        }

        for(int j=0; j<stars ; j++)
        {
            cout<<"*";
        }
        stars-=2;
        space++ ;

        cout<<"\n" ;
    }
    return 0;
}



