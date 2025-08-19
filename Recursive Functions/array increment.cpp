#include<iostream>
using namespace std ;
//من الاخر للاو ل
/*
void arrIncrement(int arr[], int len)
{
    if(len == 0)
        return ;
    cout<< (arr[len-1] + (len-1) )<<" " ;
    arrIncrement(arr , len-1 ) ;
}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
        arrIncrement(arr, len) ;

    return 0 ;
}*/

//من الاول للاخر
void arrIncrement(int arr[],int len, int idx)
{
    if(len == idx)
        return ;
    cout<< (arr[idx] + idx )<<" " ;
    arrIncrement(arr , len , ++idx) ;
}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }
        arrIncrement(arr, len, 0) ;

    return 0 ;
}

