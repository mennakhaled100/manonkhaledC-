#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,x ,y ;
    cin>>n >>x >>y ;
    int mini = min(x , y);
    int maxi = max(x , y) ;
    int some = 0;
    for(int i=1; i<=n; i++)
    {
        int sum = 0 ;
        int num = i ;
        while(num != 0)
        {

            sum += num %10 ;
            num/=10;
        }

        if(sum>=mini && sum<=maxi)
            some+=i ;
    }
    cout<<some ;
    return 0;
}
