#include<iostream>
using namespace std ;
int myPow(int value, int p = 2)
{
    if(p == 0)
        return 1 ;
    return  value * myPow(value , p-1) ;
}
int main()
{
    int n , m ;
    cin>>n >>m ;
    cout<<myPow(n ,m) ;
    return 0 ;
}

