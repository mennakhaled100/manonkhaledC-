#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n , q ;
    cin>>n >>q ;

    int arr[n] ;
    vector<int> prefix ;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i] ;
        prefix[i] = prefix[i] + arr[i] ;
    }


    while(q--)
    {
        int l , r ;
        cin>>l >>r ;

        int sum =prefix[r] -  prefix[l-1] ;

        cout<<sum<<"\n" ;
    }
    return 0;
    }



