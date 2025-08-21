#include<iostream>
using namespace std ;

void leftMax(int arr[], int len, int idx, int maxi)
{
    if(len == idx)
        return;
    maxi =max(arr[idx] , maxi);
    cout<< maxi <<" " ;
    leftMax(arr, len, ++idx,maxi);
}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
    leftMax(arr, len, 0, INT_MIN) ;
    return 0 ;
}

