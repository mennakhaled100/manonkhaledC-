#include<iostream>
using namespace std ;

void rightMax(int arr[], int len, int idx, int maxi)
{
    if(idx<0)
        return;
    maxi =max(arr[idx] , maxi);
    rightMax(arr, len,--idx, maxi);
    cout<< maxi <<" " ;

}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
    rightMax(arr, len, len-1, INT_MIN) ;
    return 0 ;
}


