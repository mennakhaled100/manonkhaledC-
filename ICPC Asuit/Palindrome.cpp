#include<iostream>
using namespace std;
int main()
{
    string str ;
    cin>>str ;

   int isPlindrom = 0 ;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == str[str.size()-1-i])
            isPlindrom++ ;
    }
    if(isPlindrom >= str.size()/2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0 ;
}

