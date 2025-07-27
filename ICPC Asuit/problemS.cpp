#include<bits/stdc++.h>
using namespace std;
int main()
{
    intt ;
    cin >> t ;
    int x ,y ;
    int sums[t];
    for(int i=0; i<t; i++)
    {
         cin >>x >> y ;
         int mini = min( x ,y );
         int maxi = max( x ,y );
         int sum = 0 ;
        for(int j=mini+1 ; j<maxi ; j++)
            {
                if (j % 2 != 0)
                {
                    sum+= j ;

                }
            }
            sums[i]= sum ;
    }
    for(int i=0; i<t; i++)
    {
        cout<<sums[i]<<"\n";
    }

    return 0;
}

