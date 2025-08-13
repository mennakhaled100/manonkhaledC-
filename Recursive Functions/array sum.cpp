#include<iostream>
using namespace std ;
int sum = 0 ;
int arrSum(int arr[], int len)
{
    if(len == 1)
        return arr[sum++] ;
    return arr[sum++] + arrSum(arr , len-1);     // or return arr[len -1 ] + arrSum[arr , len-1] ; without sum variable
}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
    cout<<arrSum(arr, len) ;

    return 0 ;
}


