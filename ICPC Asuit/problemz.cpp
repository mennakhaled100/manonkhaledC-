#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    //way by sum ->  Time limit exceeded on test 3
    int k , s ;
    cin>> k >> s ;
    int counter = 0;
    for(int x=0; x<=k; x++)
    {
        for(int y=0; y<=k; y++)
        {
            for(int z=0 ; z<=k; z++)
            {
                if( x + y +z == s)
                    counter++;
            }
        }
    }
    cout<<counter;
    */
   //way by sub s-i-j
    int k , s ;
    cin>> k >> s ;

    int counter = 0;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            int z = s - i -j ;
            if(z<=k && z>=0)
                counter++;
        }
    }

    cout<<counter;
    return 0 ;
}
