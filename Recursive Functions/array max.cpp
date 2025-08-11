#include<iostream>
using namespace std ;
int arrMax(int arr[], int len)
{
    if(len == 1)
        return arr[0] ;
    return max((arrMax(arr, len-1)) , arr[len]);
}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
    cout<<arrMax(arr, len) ;

    return 0 ;
}

