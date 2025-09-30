#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int b, q ;
    cin>>b>>q ;
    string s ;
    cin>>s;

    while(q--)
    {
        string quary  ;
        cin>>quary;

        if(quary == "substr")
        {
            int l , r ;
            cin>>l >> r ;
            cout<<s.substr(l-1 , r - l +1) <<"\n";
        }
        else if(quary == "sort")
        {
            int x,y;
            cin>>x>>y ;
            sort(s.begin() + (x-1) ,s.begin() + y);
        }
        else if(quary == "pop_back")
        {
            s.pop_back() ;
        }
        else if(quary == "back")
        {
            cout<<s.back()<<"\n";
        }
        else if(quary =="reverse")
        {
            int n, m ;
            cin>>n >>m ;
            reverse(s.begin() + (n-1) , s.begin()+m);
        }
        else if(quary == "front")
        {
            cout<<s.front() <<"\n";
        }
        else if(quary == "push_back")
        {
            char c;
            cin>>c ;
            s.push_back(c) ;
        }
        else if(quary =="print")
        {
            int z ; cin>>z ;
            cout<<s[z-1]<<"\n";
        }
    }
    return 0 ;
}




