#include<iostream>
using namespace std ;
int sum = 0 ;
int arrAverage(int arr[], int len)
{
    if(len == 1)
        return arr[sum++] ;
    return arr[sum++] + arrAverage(arr , len-1) ;
}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
    cout<<(double)arrAverage(arr, len) /len  ;

    return 0 ;
}


