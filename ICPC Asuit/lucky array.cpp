#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n ; cin>>n ;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int frequency[200] = {0};
    for(int i=0; i<n; i++)
    {
        frequency[arr[i]]++;
    }

        if(frequency[i]= 1)
            cout<<"Unlucky" ;
        else
           cout<<"Lucky" ;

    return 0;
    }


