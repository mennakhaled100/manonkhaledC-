#include<iostream>
using namespace std ;

int prefixSum(int arr[], int len, int idx ,int n)
{
    if(idx==len || n==0)
        return 0;
    return arr[idx] + prefixSum(arr , len , idx+1 , n -1) ;

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
    cout<<prefixSum(arr, len, 0, n) ;
    return 0 ;
}


