#include<iostream>
using namespace std ;

bool isPrefix(string str , string prefix , int idx)
{
    if(idx == prefix.size())
        return true ;
    if(idx > str.size() || str[idx] != prefix[idx])
        return false ;
    return isPrefix(str, prefix , idx+1) ;
}
int main()
{
    string str , prefix;
     cin>>str >>prefix;

    cout<<isPrefix(str ,prefix, 0) ;
    return 0 ;
}




