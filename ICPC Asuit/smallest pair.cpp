#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t ; cin>>t ;
    while(t--)
    {
        int n ; cin>>n ;
        n+=1 ;
        int arr[n] ;
        for(int i=1; i<n; i++)
        {
            cin>>arr[i] ;
        }
        int small = INT_MAX ;
        int eq ;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                eq = arr[i]+arr[j]+j-i ;

                if( eq < small)
                    small = eq ;
            }
        }
        cout<<small <<"\n" ;
    }

    return 0;
    }

