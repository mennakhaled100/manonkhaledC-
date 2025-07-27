#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x, p;
    cin>>x >>p;
    float y;

    cout<<fixed<<setprecision(2)<<((p/(100-x))*100);
    return 0;
}
