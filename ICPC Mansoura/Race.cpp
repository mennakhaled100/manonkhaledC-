#include<iostream>
#include<vector>
using namespace std ;
int main()
{
   int t ;
   cin>>t;
   while(t--)
   {
       int a , b , c , d ;
       cin>>a >>b >> c >>d ;
   vector<int> others ={ d,b , c} ;
   int count = 0 ;
   for(auto x: others)
   {
       if(a < x)
       {
           count++ ;
       }
   }

   cout<<count <<"\n";
   }

    return 0 ;
}

