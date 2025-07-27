#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int n2=n/10;  //3
    int n1=n%10; //9
    //cout<<n1 <<" "<<n2;
    if(n1%n2==0 || n2%n1==0)
        cout<<"YES";
    else
        cout<<"NO";



    return 0;
}

