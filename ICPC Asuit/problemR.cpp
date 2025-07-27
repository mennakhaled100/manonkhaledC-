#include<bits/stdc++.h>
using namespace std;
int main()
{


    while(true)
    {
        int n , m ;
        cin>>n >>m ;
        int sum =0 ;

        if(n<=0 || m<=0)
        break ;
        int mini = min(n , m) ;
        int maxi = max(n , m);
        for(int i=mini; i<=maxi; i++)
        {
            cout<<i<<" " ;
            sum+=i ;
        }
    cout<<"sum =" <<sum<<"\n";
    }

    return 0;
}

