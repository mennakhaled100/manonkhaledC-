#include<iostream>
using namespace std ;
int counter = 0 ;
void print(int n)
{
     cout<<n<<" ";
     counter++ ;
    if(n ==1)
        return;

    if(n % 2 == 0)
        print(n/2) ;
    else
        print(3*n + 1) ;
}
int main()
{
    int x ; cin>>x;
    print(x) ;
   cout<<"\nlength: " <<counter ;
    return 0 ;
}
