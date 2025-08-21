#include<iostream>
using namespace std ;

void arrAcc(int arr[], int len, int idx, int acc)
{
    if(len == idx)
        return;
    acc +=arr[idx] ;
    cout<< acc <<" " ;
    arrAcc(arr, len, ++idx,acc);
}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
    arrAcc(arr, len, 0, 0) ;
    return 0 ;
}



