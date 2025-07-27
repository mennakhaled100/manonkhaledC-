#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a , b ;
    cin>>a >>b ;
    int sizearr=a+b+1 ;
    char arr[sizearr] ;
    for(int i =0; i<sizearr; i++)
    {
        cin>>arr[i] ;
    }
    bool flag = true ;
     for(int i =0; i<a; i++)
    {
        if(arr[i] <'0' || arr[i]>'9')
        {
              flag = false ;
        }
    }

     for(int i =a+1; i<sizearr; i++)
    {
        if(!isdigit(arr[i]))
        {
              flag = false ;
        }
    }


        if(arr[a] != '-' )
        {
            flag = false ;
        }

    if(flag)
        cout<<"Yes\n" ;
    else
        cout<<"No\n";

    return 0;
    }
