#include<iostream>
using namespace std ;

int suffixSum(int arr[], int len, int idx ,int n)
{
    if( idx<=0 || n==0)
        return 0;
    return arr[idx] + suffixSum(arr , len , idx-1 , n -1) ;

}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
    int n ; cin>>n;
    cout<<suffixSum(arr, len, len-1, n) ;
    return 0 ;
}


