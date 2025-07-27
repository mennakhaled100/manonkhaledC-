#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t ;

    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int counter=0;
        while(n!=0)
        {
            int rem=n%2;
            if(rem==1)
            {
                counter++;
            }
            n=n/2;
        }
        int p=0;
        int decimal=0 ;
        for(int j=1; j<=counter; j++)
        {
             decimal += (1* pow(2,p));
            p++;
        }
            cout<<decimal<<"\n";
    }

    return 0 ;
}

